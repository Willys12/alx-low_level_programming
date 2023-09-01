#include "main.h"
/**
 * is_divisible - This is a helper function
 * @n:Checks for divisibility
 * @d: This is the divisor
 * @c: The value being checked
 * Return: An integer 1 or 0
 */
int is_divisible(int n, int d, int c)
{
	if (c * c > n)
	{
		return (1);
	}
	if (n % c == 0)
	{
		return (0);
	}
	return (is_divisible(n, d, c + 1));
}

/**
 * is_prime_number - My function starts here
 * @n: This my working parameter
 * Return: An integer
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_divisible(n, n, 2));
}
