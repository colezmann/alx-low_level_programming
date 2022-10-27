#include "main.h"
/**
 * _strcat - appends the src string to the dest string.
 * @src: string to append.
 * @dest: string to be appended to.
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
