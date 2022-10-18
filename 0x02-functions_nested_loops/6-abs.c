#include "main.h"
/**
  * _abs - Computes the absolute value of an integer n.
  * @n: integer to be computed.
  * Return: absolute value of n.
  */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
