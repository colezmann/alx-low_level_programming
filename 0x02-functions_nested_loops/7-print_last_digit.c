#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number n.
  * @n: number whose last digit is to be printed.
  * Return: last digit of n.
  */
int print_last_digit(int)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
