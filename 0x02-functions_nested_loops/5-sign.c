#include "main.h"

/**
 * print_sign - prints the +, -, and 0, signs
 *@n: passed argument to be checked
 *
 * Return: -1, 1, and 0 respectively
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
