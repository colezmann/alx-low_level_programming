#include <stdio.h>
/**
  * main - Prints the first 98 Fibonacci numbers
  * starting with 1 and 2
  * Return: 0 (Success)
  */
int main(void)
{
	int i;
	unsigned long a, b, c, p, q, x, y;

	i = 0;
	a = 0;
	b = 1;
	for (i = 1; i <= 91; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	p = a % 1000;
	a = a / 1000;
	q = b % 1000;
	b = b / 1000;
	while (i <= 98)
	{
		y = (p + q) / 1000;
		x = (a + b) - y * 1000;
		c = (a + b) + y;
		p = q;
		q = x;
		b = c;
		if (x >= 100)
			printf("%lu%lu", c, x);
		else
			printf("%lu0%lu", c, x);
		if (i != 98)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
