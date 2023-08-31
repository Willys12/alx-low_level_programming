#include "main.h"
/**
 * _sqrt_recursion - The function that calculates square root
 * @n: The number which square root is calculated.
 * Return: Integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion - This a helper function
 * @n: This calculates the square root
 * @j: This the iterator
 * Return: Integer
 */
int real_sqrt_recursion(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (real_sqrt_recursion(n, j + 1));
}
