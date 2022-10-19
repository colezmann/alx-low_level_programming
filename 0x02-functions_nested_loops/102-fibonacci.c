#include <stdio.h>
/**
  * main - Prints the first 50 Fibonacci numbers
  * starting with 1 and 2
  * Return: 0 (Success)
  */
int main(void)
{
	unsigned long a, b, c, i;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
