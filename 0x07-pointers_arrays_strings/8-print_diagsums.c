#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: Pointer to matrix
 * @size: The size of matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				sum1 += *(a + i * size + j);
			if (i + j == size - 1)
				sum2 += *(a + i * size + j);
		}
	}
	printf("%u, %u\n", sum1, sum2);
}
