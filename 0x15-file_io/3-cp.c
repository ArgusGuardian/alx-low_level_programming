#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * error_exit - exit helper function
 * @code: code to exit with
 * @message: message to print
 * @arg: argument
 */

void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
/**
 * main - read from file_from and copy to file_to
 * @argc: number of terminal args
 * @argv: terminal args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, len = 0;
	ssize_t rd, wd;
	char *buff[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while ((*argv)[len])
		len++;
	if (buff == NULL)
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	while ((rd = read(fd_from, buff, len)) > 0)
	{
		wd = write(fd_to, buff, rd);
		if (wd == -1)
		{
			close(fd_from), close(fd_to);
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (rd == -1)
	{
		close(fd_from), close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	close(fd_from);
	close(fd_to);
	return (0);
}
