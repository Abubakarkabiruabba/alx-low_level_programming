#include "main.h"
#include <stdio.h>

/**
 * print_numbers - display the numbers 1 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
