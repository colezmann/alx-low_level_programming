#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to be concatenated
 * Return: pointer to newly allocated space in memory containing
 * s1 followed by the first n bytes of s2, and null terminated (Success);
 * NULL (otherwise)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat_str;
	unsigned int i, j = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		j++;
	nconcat_str = malloc(sizeof(char) * (j + 1));
	if (nconcat_str == NULL)
		return (NULL);
	j = 0;
	for (i = 0; s1[i]; i++)
	{
		nconcat_str[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		nconcat_str[j] = s2[i];
		j++;
	}
	nconcat_str[j] = '\0';
	return (nconcat_str);
}
