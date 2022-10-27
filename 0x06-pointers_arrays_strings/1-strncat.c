#include "main.h"
/**
 * *_strncat - appends n bytes from src string to dest string
 * @src: string to append
 * @dest: string to be appended to
 * @n: number of bytes to append
 * Return: pointer to the resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
