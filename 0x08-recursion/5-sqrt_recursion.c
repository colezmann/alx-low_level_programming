#include "main.h"
/**
 * _sqrt - check for the square root of n
 * @n: number whose square root is to be checked
 * @root: number to check n with
 * Return: square root of n if n has a natural square root; -1, otherwise
 */
int _sqrt(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be determined
 * Return: square root of n if n has a natural square root; -1, otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
