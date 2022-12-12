#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* we are to use the ascii code for 0 to 9 which is 48 to 57 */
for (int i = 48; i < 58; i++)
{
	putchar(i);
}
	putchar('\n');
	return (0);
}
