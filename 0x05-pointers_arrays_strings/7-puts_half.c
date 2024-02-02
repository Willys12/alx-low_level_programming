#include "main.h"
/**
 * puts_half - Entry point
 * @str: Working string
 * Return: Always void
 */
void puts_half(char *str)
{
	int k, l, m;

	m = 0;
	for (k = 0 ; str[k] != '\0' ; ++k)
		++m;
	l = ((m - 1) / 2);
	for (k = l + 1 ; str[k] != '\0' ; ++k)
		_putchar(str[k]);
	_putchar('\n');
}
