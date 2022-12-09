#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to write to the file
 * Return: 1 (Success); 0 (otherwise)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1 || wr != len)
		return (-1);

	close(fd);
	return (1);
}
