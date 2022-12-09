#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: number of letters the function should read and print
 * Return: the actual number of letters the function can read and print;
 * otherwise 0 (if function fails or if filename is NULL)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_rd, num_wr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	num_rd = read(fd, buff, letters);
	if (num_rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	num_wr = write(STDOUT_FILENO, buff, num_rd);
	if (num_wr == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	close(fd);
	return (num_wr);
}
