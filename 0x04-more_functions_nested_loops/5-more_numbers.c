#include "main.h"
/**
 * more_numbers - prints numbers 0 through to 14, 10 times.
 */
void more_numbers(void)
{
	int i, j;

	i = 1;

	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
		i++;
	}
}
