#include "main.h"
/**
 * is_prime_number - This function should print 1 or 0
 * @n: The working parameter
 * Return: Should be an integer
 */
int is_prime_number(int n)
{
	int i, sqrt_n;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	sqrt_n = 1;
	for (i = 2; sqrt_n <= n / i ; ++i)
	{
		sqrt_n = i;
	}
	for (i = 2 ; i <= sqrt_n ; ++i)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
