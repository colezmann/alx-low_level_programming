#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	x = 97;
	while (x <= 102)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
