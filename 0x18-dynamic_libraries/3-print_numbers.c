#include "main.h"

/**
 * print_numbers - display the numbers 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
