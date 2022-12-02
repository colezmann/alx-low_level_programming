#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to integer
 * @index: index (beginning at 0) of bit to be set
 * Return: 1 (Success); -1 (Otherwise)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
