#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: Number of times lines are  printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= n ; ++i)
		{
			for (j = 0 ; j < i ; ++j)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
