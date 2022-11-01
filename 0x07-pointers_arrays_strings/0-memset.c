#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b.
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
