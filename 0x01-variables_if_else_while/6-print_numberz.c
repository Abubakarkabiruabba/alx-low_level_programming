#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* we are to use the ascii code for 0 to 9 which is 48 to 57 */
for (int i = 0; i < 10; i++)
{
	putchar((i % 10) + '0');
}
	putchar('\n');
	return (0);
}
