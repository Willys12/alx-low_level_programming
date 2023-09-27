#include "main.h"
/**
*factorial - Function that returns factorial of given number
*@n: Represents the factorial of a number
*Return: An integer
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
