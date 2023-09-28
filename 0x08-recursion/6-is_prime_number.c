#include "main.h"
int prime_recursive(int n, int i);
/**
*is_prime_number - Checks is n is a prime number
*@n: The value to be checked
*Return: If n is prime returns 1 otherwise 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if ((n % 2 == 0) || (n % 3 == 0))
	{
		return (0);
	}
	else
	{
		return (prime_recursive(n, 5));
	}
}
/**
*prime_recursive - This is a helper function to is_prime_number
*@n: The parameter 1
*@i: The parameter 2
*Return: Integer value
*/
int prime_recursive(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if ((n % i == 0) || (n % (i + 2) == 0))
	{
		return (0);
	}
	else
	{
		return (prime_recursive(n, i + 6));
	}
}
