#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: this is the letter
 * Return: 1 for lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
