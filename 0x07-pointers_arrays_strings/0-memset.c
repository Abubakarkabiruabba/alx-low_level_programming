#include "main.h"

/**
 * _memset - fill the n bytes memory area pointed to by s with the const byte b
 * @s: a pointer to the memory area that is to be filled with the constant byte
 * @b: the constant byte that is to be used to fill the memory area.
 * @n: the number of bytes to be filled with the constant byte.
 *
 * Return: returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
