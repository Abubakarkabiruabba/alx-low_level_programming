#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
