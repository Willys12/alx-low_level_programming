#include "main.h"
/**
 * print_square - Beginning of our function
 * @size: Shows the size of square
 * Return: Void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, k;

		for (i = 1 ; i <= size ; ++i)
		{
			for (k = 1 ; k <= size ; ++k)
				_putchar('#');
			_putchar('\n');
		}
	}
}
