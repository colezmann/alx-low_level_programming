#include "main.h"
/**
  * print_times_table - Prints the n times table
  * @n: integer (n > 0 && n <= 15)
  * Return: Array of products in (n + 1)rows r by 
  * (n + 1)columns c
  */
void print_times_table(int n)
{
	int r, c, prod;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				prod = r * c;
				if (c == 0)
				{
					_putchar('0' + prod);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (prod < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + prod);
					}
					else if (prod >= 10 && prod < 100)
					{
						_putchar(' ');
						_putchar('0' + (prod / 10));
						_putchar('0' + (prod % 10));
					}
					else if (prod >= 100)
					{
						_putchar('0' + (prod / 100));
						_putchar('0' + (prod / 10) % 10);
						_putchar('0' + (prod % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
