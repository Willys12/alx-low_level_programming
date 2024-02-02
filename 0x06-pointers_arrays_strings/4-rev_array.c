#include "main.h"
/**
 * reverse_array - Function begins here
 * @a: First parameter
 * @n: Number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0 ; i < n / 2 ; ++i)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
	}
}
