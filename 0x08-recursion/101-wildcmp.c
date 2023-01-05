#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if identical, o0 otherwise
 *@s1: first string to compare
 *@s2: second string to compare, may contain special character *
 *
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
