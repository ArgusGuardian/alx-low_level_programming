#include "main.h"
/**
 * append_text_to_file - read from file and print to standard output
 * @filename: targeted file name
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	while (text_content[len])
		len++;

	wd = write(fd, text_content, len);
	if (wd == -1)
		return (-1);
	return (1);
}
