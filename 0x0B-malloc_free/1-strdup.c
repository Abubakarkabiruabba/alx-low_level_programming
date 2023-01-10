#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the strings been inputed
 *@str: strings to be duplicated
 *
 * Return: a ponter to the copied strings if successful, or NULL it it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + i));
	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
