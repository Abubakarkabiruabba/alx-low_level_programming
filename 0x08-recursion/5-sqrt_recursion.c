#include "main.h"

/**
 * _sqrt_recursion - return the square root of a natural number
 * @n: number to square rooted
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	int i = 1;
	int result = _sqrt_recursion(n - 1);

	while (result > i)
	{
		i++;
		result = _sqrt_recursion(n - i * i);
	}
	if (result == i)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
