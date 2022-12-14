#include "main.h"


/**
 * _islower - prints whether an alphabet is lower or otherwise
 *@c: the argument to be checked
 *
 * Return: 0 if lower, 1 if upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
