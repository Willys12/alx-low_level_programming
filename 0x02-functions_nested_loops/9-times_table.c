#include "main.h"
#include <stdio.h>
/**
 * times_table - Beginning of function
 * row: Define rows
 * column: Define columns
 * Return: Always void
 */

void times_table(void)
{
	int row, column;

	for (row = 0 ; row < 10 ; ++row)
	{
		for (column = 0 ; column < 10 ; ++column)
		{
			int result = column * row;

			if (column == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (column != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
