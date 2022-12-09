#include "main.h"
/**
 * _strlen - determine length of string
 * @str: string whose length is to be determined
 * Return: string length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to write to the file
 * Return: 1 (Success); 0 (otherwise)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1 || wr != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
