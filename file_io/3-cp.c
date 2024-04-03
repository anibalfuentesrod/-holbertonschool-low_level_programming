#include "main.h"
#include <stdio.h>

#define BUFSIZE 1024
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Array of argument strings
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    int src_fd, dest_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFSIZE];
    mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
        return (EXIT_FAILURE);
    }

    src_fd = open(argv[1], O_RDONLY);
    if (src_fd == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        return (EXIT_FAILURE);
    }

    dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
    if (dest_fd == -1)
    {
        fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
        close(src_fd);
        return (EXIT_FAILURE);
    }

    while ((bytes_read = read(src_fd, buffer, BUFSIZE)) > 0)
    {
        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written != bytes_read || bytes_written == -1)
        {
            fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
            close(src_fd);
            close(dest_fd);
            return (EXIT_FAILURE);
        }
    }

    if (bytes_read == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        close(src_fd);
        close(dest_fd);
        return (EXIT_FAILURE);
    }

    if (close(src_fd) == -1)
    {
        fprintf(stderr, "Error: Can't close fd %d\n", src_fd);
        return (EXIT_FAILURE);
    }

    if (close(dest_fd) == -1)
    {
        fprintf(stderr, "Error: Can't close fd %d\n", dest_fd);
        return (EXIT_FAILURE);
    }

    return (EXIT_SUCCESS);
}
