#include "main.h"

/**
 * _puts_recursion - write a string
 * @s: inputted string
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
