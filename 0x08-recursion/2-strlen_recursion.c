#include "main.h"
/**
 * _strlen_recursion - This function prints a string length
 * @s: The string to be printed
 * Return: The length of string printed
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
