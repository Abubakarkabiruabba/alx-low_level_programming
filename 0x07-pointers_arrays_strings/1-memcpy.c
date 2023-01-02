#include "main.h"

/**
 * _memcpy - copy the n bytes memory area pointed to by s with the const byte b
 * @dest: a pointer to the memory area to be copied  with the constant byte
 * @src: the constant byte that is to be used to fill the memory area.
 * @n: the number of bytes to be filled with the constant byte.  *
 * Return: returns a pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 1; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
