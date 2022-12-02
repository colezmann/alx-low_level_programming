#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index of the bit to be determined (beginning from 0)
 * Return: the value of the bit at index; -1 (if an error occurred)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit = ((n >> index) & 1);
	return (bit);
}
