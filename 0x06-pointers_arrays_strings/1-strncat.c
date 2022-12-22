#include "main.h"

/**
 * _strcat - concetenate two strings
 *@dest: firsr input
 *@src: second input
 *@n: inserted integer
 *
 * Return:  dest
 */
char *_strcat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int i;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	i = 0;

	while (*src != '\0' && i < n)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		i++;
	}
	*dest_end = '\0';
	return (dest);
}
