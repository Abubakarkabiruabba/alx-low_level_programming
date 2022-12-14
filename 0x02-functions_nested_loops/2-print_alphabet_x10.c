#include "main.h"

/**
 * print_alphabet_x10 - print the lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
	char c;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
