#include "main.h"
/**
  * times_table - Prints the 9-times table
  * starting with 0
  * Return: 10 x 10 (i x j) array
  */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (j == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}
