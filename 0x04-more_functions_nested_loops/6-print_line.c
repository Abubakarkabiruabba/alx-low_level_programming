#include "main.h"

/**
 * print_line - prints straight line n times.
 *
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(95);
	}
	putchar('\n');
}
