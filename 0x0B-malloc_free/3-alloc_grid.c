#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2-D array of integers (Success); NULL (otherwise)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);
			free(arr);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
