#include "main.h"


/**print_to_98 - print all natural numbers from n to 98
 *@n: input number
 */
void print_to_98(int n)
{
	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		if (i != 98);
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

