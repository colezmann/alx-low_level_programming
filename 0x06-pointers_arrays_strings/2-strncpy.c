#include "main.h"
/**
 * _strncpy - copies at most n bytes of the string pointed
 * to by src to the buffer pointed to by dest.
 * @src: source of pointer to the string to copy.
 * @dest: destination of pointer to the string
 * @n: number of bytes to copy.
 * Return: pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
