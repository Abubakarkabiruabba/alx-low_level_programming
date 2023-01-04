#include "main.h"

/**
 * _strlen_recursion - write a string in reverse
 * @s: inputted string
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
