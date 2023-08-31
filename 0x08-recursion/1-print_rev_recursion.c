#include "main.h"
/**
 * _print_rev_recursion - This function prints a reverse string
 * @s: This is the working string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
