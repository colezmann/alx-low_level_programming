#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string to be compared with
 * @s2: string to be compare
 * Return: -ve int if (*s1 < *s2), 0 if (*s1 = *s2) and +ve int if (*s1 > *s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
