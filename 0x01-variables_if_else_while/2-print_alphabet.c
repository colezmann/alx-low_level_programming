#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
