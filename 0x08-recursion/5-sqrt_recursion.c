#include "main.h"

/**
 * _sqrt - Computes the natural square root of a number.
 *
 * @n: The number.
 * @i: The current value to check.
 *
 * Return: If the square root exists - the square root.
 *         Otherwise -1.
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 *
 * @n: The number.
 *
 * Return: If the square root exists - the square root.
 *         Otherwise -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
