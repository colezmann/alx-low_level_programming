#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number; 0 (otherwise)
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int sum;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	len -= 1;

	i = 0;
	sum = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		else if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	}
	return (sum);
}
