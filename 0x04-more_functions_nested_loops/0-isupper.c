#include "main.h"

/**
 * _isupper - check whether an input is uppercase or lower
 * @c: Checked input
 *
 * Return: 1 if upper 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
