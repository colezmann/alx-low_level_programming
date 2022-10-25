#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string length
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
/**
 * puts2 - prints every second character of a string
 * starting fom the first character
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str) && *str != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
