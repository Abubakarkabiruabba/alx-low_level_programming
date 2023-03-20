#include "main.h"

/**
 * print_most_numbers - display the numbers 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int nm;

	for (nm = 48; nm <= 57; nm++)
	{
		if (nm == 50 || nm == 52)
			continue;
		{
			putchar(nm);
		}
	}
	putchar('\n');
}
