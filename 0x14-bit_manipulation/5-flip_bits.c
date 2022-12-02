#include "main.h"
/**
 * flip_bits - returns the number of bits needed to be flipped
 * to get from one number to another
 * @n: number to be flipped
 * @m: number to flip to from n
 * Return: number of bits flipped to get m from n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, num_bits = 0;

	while (xor > 0)
	{
		num_bits = num_bits + (xor & 1);
		xor = xor >> 1;
	}
	return (num_bits);
}
