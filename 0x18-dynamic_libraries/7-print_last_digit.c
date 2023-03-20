#include "main.h"

/**
 * print_last_digit - print the last digit of the inserted number
 *@a: inserted argument
 *
 * Return: return the last number
 */
int print_last_digit(int a)
{
	int last_digit = a % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
