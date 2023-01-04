#include "main.h"

/**
 * _sqrt_recursion - return the square root of a natural number
 * @n: number to square rooted
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	int result;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	result = _sqrt_recursion(n - 1);
	if (result > 1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
