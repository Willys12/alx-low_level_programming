#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that print alphabets
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		++alphabet;
	}
	putchar('\n');
	return (0);
}
