#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - Prints all natural numbers from n to 98.
  * @n: Number to begin printing from.
  * Return: Numbers from n to 98.
  */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d", 98);
	if (n == 98)
	{
		printf("%d", 98);
	}
	printf("\n");
}
