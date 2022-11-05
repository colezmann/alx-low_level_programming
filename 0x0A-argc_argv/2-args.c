#include <stdio.h>
/**
 * main - prints all arguments it receives, each argument on a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
