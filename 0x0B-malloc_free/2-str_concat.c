#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory containing
 * the contents of s1 followed by s2 (Success); NULL (otherwise)
 */
char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int i, j;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (j = 0; s2[j]; j++)
		len2++;

	conc_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conc_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		conc_str[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		conc_str[i] = s2[j];
		i++;
	}
	return (conc_str);
}
