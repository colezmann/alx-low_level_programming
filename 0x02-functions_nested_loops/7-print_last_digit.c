#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number n.
  * @n: number whose last digit is to be printed.
  * Return: last digit z of n.
  */
int print_last_digit(int n)
{
	int z = n % 10;

	if (n < 0)
		z = z * -1;
	_putchar(z + '0');
	return (z);
}
