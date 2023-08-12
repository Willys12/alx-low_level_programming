#include <stdio.h>
/**
 * main- Entry point
 * Description: Program that prints the size of various types
 * Return: Always 0
 */
int main(void)
{
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(1));
	prinf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(4));
	print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(4));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(8));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(4));
	return (0);
}
