#include "main.h"
/**
 * print_array - Entry point
 * @a: First integer
 * @n: Second integer
 * Return: Always void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0 ; m < n ; ++m)
	{
		printf("%d", a[m]);
		if (m < n - 1)
			printf(", ");
	}
	printf("\n");
}
