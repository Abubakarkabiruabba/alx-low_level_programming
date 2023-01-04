#include "main.h"

/**
 * _pow_recursion - print second number raise to the power of the first
 * @x: first number
 * @y: second number
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
