#include "main.h"
#include <stdio.h>
/**
 * main - Function begins here
 * Description: A program that prints the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	unsigned long int j;
	unsigned long int k = 612852475143;

	for (j = 3 ; j < 782849 ; j = j + 2)
	{
		while (k % j == 0 && k != j)
			k = k / j;
	}
	printf("%lu\n", k);
	return (0);
}
