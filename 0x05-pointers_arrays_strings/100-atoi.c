#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	short boolean;
	int i, negative, res;

	i = negative = res = boolean = 0;
	negative = -1;

	while (*s != '\0')
	{
		if (s[i] == '-')
			negative *= -1;
		if (s[i] > '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	res *= negative;
	return (res);
}
