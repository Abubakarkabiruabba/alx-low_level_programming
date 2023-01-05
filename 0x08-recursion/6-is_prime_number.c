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
/**
* is_prime_number_helper - recursive helper function for is_prime_number
* @n: number to check
* @i: current divisor to check
*
* Return: 1 if prime, 0 if not
*/
int is_prime_number_helper(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, i + 1));
}
