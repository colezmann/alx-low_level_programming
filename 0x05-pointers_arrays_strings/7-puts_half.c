#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (*str != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i / 2) + 1;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
