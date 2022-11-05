#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if the number of arguments passed is not exactly 1;
 * 0, otherwise
 */
int main(int argc, char *argv[])
{
	int n, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	n = atoi(argv[1]);

	change += n / 25;
	n = n % 25;
	change += n / 10;
	n = n % 10;
	change += n / 5;
	n = n % 5;
	change += n / 2;
	n = n % 2;
	change += n / 1;

	printf("%d\n", change);
	return (0);
}
