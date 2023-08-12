#include <stdio.h>
/**
 * main- Entry point
 * Description: Program that prints the size of various types
 * Return: Always 0
 */
int main(void)
{
	char q;
	int r;
	long int s;
	long long int t;
	float u;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(q));
	prinf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(r));
	print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(u));
	return (0);
}
