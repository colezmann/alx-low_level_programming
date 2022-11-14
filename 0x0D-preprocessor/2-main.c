#include <stdio.h>
/**
 * main - prints name of source file executable was compiled from
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
