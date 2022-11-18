#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all its parameters
 * @n: number of parameters passed to the function to sum up
 * Return: sum of parameters; 0 (if n == 0)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
