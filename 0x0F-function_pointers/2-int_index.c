#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array of integers
 * @array: array
 * @size: array size
 * @cmp: pointer to function used to compare values
 * Return: index of first element for which cmp does not return 0;
 * -1 (if no element matches or if size <= 0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
