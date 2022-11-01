#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: number of bytes, b in s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, b;

	i = 0;
	b = 0;
	
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return b;
		}
		i++;
	}
	return b;
}
