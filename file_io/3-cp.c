#include "main.h"
#define BUFFER_SIZE 1024
/**
 * validate_arguments - validates command line arg
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on succes 1 on fail
**/
int validate_arguments(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (1);
	}
	(void)argv;

	return (0);
}

/**
 * copy_files - copy the files content
 * @src: the source bruh
 * @dest: the destination bruh
 * Return: 0 on succes or the error
**/
int copy_files(const char *src, const char *dest)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written = 0;
	char buffer[BUFFER_SIZE];
	int i = 0;

	while (src[i] != '\0' && dest[i] != '\0' && src[i] == dest[i])
		i++;

	if (src[i] != '\0' && dest[i] == '\0')
	{
		dprintf(STDERR_FILENO, "Error: '%s' and '%s' are the same\n", src, dest);
		return (1);
	}

	fd_from = open(src, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		return (1);
	}
	fd_to = open(dest, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		if (access(dest, W_OK) == -1){
			dprintf(STDERR_FILENO, "Error: Permission enied to write to %s\n", dest);
		} else
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		close(fd_from);
		return (1);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (bytes_written == -1 || (bytes_written != bytes_read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close(fd_from);
			close(fd_to);
			return (1);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		close(fd_from);
		close(fd_to);
		return (1);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		return (100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (101);
	}
return (0);
}
/**
 * main - the main duhh, and entry point of the program
 * @argc: the argument count
 * @argv: the argument vector i think
 *
 * Return: 0 on succes, 91 if the number of arg is incorrect
**/
int main(int argc, char *argv[])
{
	if (validate_arguments(argc, argv) != 0)
		return (97);

	if (copy_files(argv[1], argv[2]) != 0)
		return (1);
return (0);
}
