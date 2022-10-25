#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
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
 * puts_half - prints the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len / 2) + 1;
	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
