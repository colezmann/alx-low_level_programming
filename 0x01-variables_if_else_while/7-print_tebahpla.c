#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar(10);
	return (0);
}


