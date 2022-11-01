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
	int i, j, b = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b++;
				break;
			}
			else if (accept[j + 1] == '\0' && s[i] != accept[j])
				return b;
		}
	}
	return b;
}
