#include "main.h"
/**
 * swap_int - Beginning of the function
 * @a: First value
 * @b: Second value
 * Description: A function that swaps value of two integers
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
