#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			unsigned int j;

			for (j = 0; haystack[i + j] == needle[j] && needle[j] != '\0'; j++)
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
