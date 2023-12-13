#include "main.h"
/**
 * _puts - The beginning of function
 * @str: This is the string to be printed
 * Return: Always void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
