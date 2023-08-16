#include "main.h"
/**
 * print_last_digit - Beginning of function
 * @n: Number to be used
 * Return: Last digit of a number
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;
	{
		_putchar(lastDigit + '0');
		_putchar('\n');
	}
	return (0);
}
