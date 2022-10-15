#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x = 97;
	char y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar(10);
	return (0);
}
