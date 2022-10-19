#include <stdio.h>
/**
  * main - Prints the sum of the even-valued terms in
  * a Fibonacci sequence not exceeding 4,000,000
  * Return: 0 (Success)
  */
int main(void)
{
	int a, b, c, evens_sum;

	a = 1;
	b = 1;
	evens_sum = 0;
	while (b < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c <= 4000000 && c % 2 == 0)
			evens_sum += c;
	}
	printf("%d\n", evens_sum);
	return (0);
}
