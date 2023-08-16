#include "main.h"
/**
 * print_sign - Beginning of the function
 * Return: 1 if positive 0 if zero -1 if neg
 * @n: Letter to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else(n<0)
		_putchar('-');
		return (-1);
}
