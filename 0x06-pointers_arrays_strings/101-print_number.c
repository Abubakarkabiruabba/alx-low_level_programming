#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	int divisor = 1;

	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor >= 1)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
