#include "main.h"
/**
 * print_line - Entry point
 * @n: Character to draw line
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; ++i)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
