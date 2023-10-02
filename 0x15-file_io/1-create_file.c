#include "main.h"
/**
 * create_file - read from file and print to standard output
 * @filename: filename
 * @text_content: content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t wd;

	if (filename == NULL)
		return (-1);

	if (text_content)
		while (text_content[len])
			len++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wd = write(fd, text_content, strlen(text_content));
		if (wd == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
