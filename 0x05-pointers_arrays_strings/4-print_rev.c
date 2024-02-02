#include "main.h"
/**
 * print_rev - The main function
 * @s: The working string
 * Return: Always void
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;
	for (i = 0 ; s[i] != '\0' ; ++i)
		++j;
	for (i = j - 1 ; i >= 0; --i)
		_putchar(s[i]);
	_putchar('\n');
}
