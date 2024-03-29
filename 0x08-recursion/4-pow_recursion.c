#include "main.h"
/**
* _pow_recursion - Returns value of x raised to power of y
*@x: Value 1
*@y: Value 2
*Return: Integer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
