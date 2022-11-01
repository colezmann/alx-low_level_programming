#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: square matrix of integers
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int r, i, sum_x = 0, sum_y = 0;

	for (r = 0; r < size; r++)
	{
		i = (r * size) + r;
		sum_x += a[i];
	}
	for (r = 1; r <= size; r++)
	{
		i = (r * size) - r;
		sum_y += a[i];
	}
	printf("%d, %d\n", sum_x, sum_y);
}
