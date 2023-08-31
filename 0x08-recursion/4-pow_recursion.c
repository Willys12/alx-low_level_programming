#include "main.h"
/**
 * _pow_recursion - Calculates power of given integers
 * @x: Value 1
 * @y: Value 2
 * Return: Integer
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
	return (x * _pow_recursion(x, y - 1));
}
