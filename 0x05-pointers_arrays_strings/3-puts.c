#include "main.h"
/**
 * _puts - The beginning of function
 * @str: This is the string to be printed
 * Return: Always void
 */
void _puts(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0' ; ++n)
		_putchar(str[n]);
	_putchar('\n');
}
