#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

void rev_string(char *s)
{
	int i, j;
	char k;

	i = 0;
	j = _strlen(s) - 1;
	while (i , j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		i++;
		j--;
	}
}
