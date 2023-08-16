#include "main.h"
#include <stdio.h>
/**
 * times_table - Beginning of function
 * @y: rows
 * @x: columns
 * Return: Always void
 */
void times_table(void)
{
	int y, x;

	for (y = 0 ; y < 10 ; ++y)
	{
		for (x = 0 ; x < 10 ; ++x)
		{
			int result = x * y;

			if (x == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (x != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
