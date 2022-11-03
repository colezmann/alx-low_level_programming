#include "main.h"
/**
 * is_prime - recursively checks if a number n is prime
 * by dividing n by div, beginning at div = 3
 * @n: number to be checked
 * @div: divisor
 * Return: 1 if n is prime, 0 if not prime, or is_prime
 */
int is_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime(n, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 3;

	if (n == 2)
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);
	return (is_prime(n, div));
}
