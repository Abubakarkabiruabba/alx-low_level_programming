#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			putchar(' ');
		for (j--; j < size; j++)
			putchar(35);
		if (i < (size - 1))
			putchar('\n');
	}
	putchar('\n');
}
