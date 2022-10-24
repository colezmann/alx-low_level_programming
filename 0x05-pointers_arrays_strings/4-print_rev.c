#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	i = len;
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
