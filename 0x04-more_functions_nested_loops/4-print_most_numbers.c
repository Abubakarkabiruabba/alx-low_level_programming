#include "main.h"

/**
 * print_most_numbers - display the numbers 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int nm;

	for (nm = 0; nm <= 9; nm++)
	{
		if (nm == 2 || nm == 4)
			continue;
		{
			_putchar(nm);
		}
		_putchar('\n');
	}
}
