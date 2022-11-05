#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success); 1 (otherwise)
 */
int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);
	return (0);
}
