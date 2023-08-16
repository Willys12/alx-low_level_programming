#include "main.h"
/**
 * print_last_digit - Beginning of function
 * @n: Number to be used
 * Return: Last digit of a number
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (n < 0)
		lastDigit = -lastDigit;

	{
		_putchar(lastDigit + '0');
	}
	return (lastDigit);
}
