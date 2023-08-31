#include "main.h"
/**
 * _strlen_recursion - THis function prints the length in recursion
 * @s: This is the working string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1) + _strlen_recursion(s + 1);
}
