#include "main.h"

/**
 * _sqrt_helper - Recursively finds the square root of a number.
 * @n: The input number.
 * @x: The current value to check.
 *
 * Return: The square root of n, or -1 if there's no natural square root.
 */
int _sqrt_helper(int n, int x);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Recursively finds the square root of a number.
 * @n: The input number.
 * @x: The current value to check.
 *
 * Return: The square root of n, or -1 if there's no natural square root.
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_sqrt_helper(n, x + 1));
}
