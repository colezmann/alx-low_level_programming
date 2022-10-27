#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be changed
 * Return: string in uppercase letters
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 'a' + 'A';
		s++;
	}
	return (s);
}
