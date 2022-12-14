#include "main.h"


/**
 * _islower - prints whether an alphabet is lower or otherwise
 *@c: the argument to be checked
 *
 * Return: 1 if lower, 0 if upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
