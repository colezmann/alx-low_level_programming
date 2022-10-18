#include "main.h"
/**
  * print_alphabet - Prints the alphabet in lowercase, followed by a new line
  *
  * Return: Nothing
  */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
