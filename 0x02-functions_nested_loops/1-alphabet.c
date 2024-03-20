#include "main.h"
/**
 * print_alphabet - Writes alphabet
 * _putchar - prints the output
 * Return: Always void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
