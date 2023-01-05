#include "main.h"

/**
 * is_prime_number - returns 1 when the input is prime number, 0 otherwise
 * is_prime_number_helper - helps in determining the prime number
 * @n: input number
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	int is_prime_number(int n)
	{
		if (n <= 1)
		{
			return (0);
		}
		if (n == 2)
		{
			return (1);
		}
		return (is_prime_number_helper(n, 2));
	}
	int is_prime_number_helper(int n, int i)
	{
		if (i == n)
		{
			return (1);
		}
		if (n % i == 0)
		{
			return (0);
		}
		return (is_prime_number_helper(n, i + 1));
	}
}
