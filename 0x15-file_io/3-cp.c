#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * __exit - prints error messages and exits with exit value
 * @err: exit value
 * @s: name of the file
 * @fd: file descriptor
 * Return: 0 (success)
 */
int __exit(int err, char *s, int fd)
{
	switch (err)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(err);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(err);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(err);
	default:
		return (0);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success); 97-100 (error)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char *buff[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		__exit(99, argv[2], 0);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		__exit(98, argv[1], 0);

	while ((rd = read(fd_from, buff, 1024)) != 0)
	{
		if (rd == -1)
			__exit(98, argv[1], 0);
		wr = write(fd_to, buff, rd);
		if (wr == -1)
			__exit(99, argv[2], 0);
	}

	if (close(fd_to) == -1)
		__exit(100, NULL, fd_to);
	else
		close(fd_to);
	if (close(fd_from) == -1)
		__exit(100, NULL, fd_from);
	else
		close(fd_from);

	return (0);
}
