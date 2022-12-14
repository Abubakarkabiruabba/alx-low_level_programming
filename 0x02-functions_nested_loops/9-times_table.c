#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: No return
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int times = i * j;

			if (times < 10)
			{
				_putchar('0' + times);
			}
			else
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
