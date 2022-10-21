#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times \ is printed.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		for (dia = 1; dia <= n; dia++)
		{
			for (sp = 1; sp < dia; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
