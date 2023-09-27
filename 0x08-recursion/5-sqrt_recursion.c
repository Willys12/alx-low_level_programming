#include "main.h"
int help_fun2(int x, int y);
/**
*_sqrt_recursion - Returns natural square root of a number
*@n: The working parameter
*Return: Integer
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (help_fun2(n, 0));
	}
}

/**
* help_fun2 - Helps to find square root.
*@x: The parameter which square root is being calculated.
*@y: The parameter to being squared and compared with x.
*Return: If the square root is found, return it's value otherwise -1.
*/
int help_fun2(int x, int y)
{
	if ((y * y) > x)
	{
		return (-1);
	}
	else if ((y * y) == x)
	{
		return (y);
	}
	else
	{
		return (help_fun2(x, y + 1));
	}
}
