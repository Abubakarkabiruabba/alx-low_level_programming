#include "main.h"
#include <stdlib.h>

/**
 * create_array - array of chars, and initializes it with a specific char
 *@c: char to initialize
 *@size: size of the memory to be allocated
 *
 * Return: a ponter to an array if successful, or NULL it it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c
	return (array);
}

