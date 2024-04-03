#include "main.h"
/**
 * create_file - the name of function
 * @filename: the file to create i think
 * @text_content: the text content duhh
 *
 * Return: 1 if succes or -1 on fail
**/
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
