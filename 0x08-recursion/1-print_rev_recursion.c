#include "main.h"

/**
 * _print_rev_recursion - write a string in reverse
 * @s: inputted string
 *
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
