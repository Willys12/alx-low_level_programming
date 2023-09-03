#include "main.h"
/**
 * _puts - Entry point
 * @s: This is working pointer
 *Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		++s;
	}
}
