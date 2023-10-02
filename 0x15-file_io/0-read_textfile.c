#include "main.h"
/**
 * read_textfile - read from file and print to standard output
 * @filename: targeted filename
 * @letters: number of letter to be read and printed
 * Return: number of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wd, fd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	wd = write(STDOUT_FILENO, buff, rd);
	if (wd == -1 || (size_t)wd != letters)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);

	return (wd);
}
