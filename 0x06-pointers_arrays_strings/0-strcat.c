#include "main.h"

/**
 * _strcat - concetenate two strings
 *@dest: firsr input
 *@src: second input
 *
 * Return:  dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}
