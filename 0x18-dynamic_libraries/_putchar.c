#include "main.h"
#include <unistd.h>

/**
 * _putchar - displays a character to the standard output
 *@c: character to be displayed for example
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
