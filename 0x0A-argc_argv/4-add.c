#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success); 1 (Otherwise)
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);

			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
