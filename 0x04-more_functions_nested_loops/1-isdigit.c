#include "main.h"

/**
 * _isdigit - check whether an input is digit  or not
 * @c: Checked input
 *
 * Return: 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
