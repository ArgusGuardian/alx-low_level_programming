#include "main.h"
/**
 * read_textfile - read from file and print to standard output
 * @filename: targeted filename
 * @letters: number of letter to be read and printed
 * Return: number of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	wd = write(STDOUT_FILENO, buffer, rd);

	if (fd == -1 || rd == -1 || wd == -1 || wd != rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (wd);
}
