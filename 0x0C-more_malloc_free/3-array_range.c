#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first integer (minimum value) in array
 * @max: last integer (maximum value) in array
 * Return: pointer to the newly created array (Success); NULL (otherwise)
 */
int *array_range(int min, int max)
{
	int *arr, i, range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		arr[i] = min++;
	return (arr);
}
