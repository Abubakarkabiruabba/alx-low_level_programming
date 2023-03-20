#include "main.h"

/**
 * _isalpha - Indicate whether an int is alphabet or otherwise
 *@c: inputted argument
 *
 * Return: 1 if c is letter, 0 if number
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
