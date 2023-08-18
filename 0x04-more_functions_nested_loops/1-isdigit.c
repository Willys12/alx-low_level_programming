#include "main.h"
/**
 * _isdigit - Entry point
 * @c: Character to be checked
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else if (c >= 67 && c <= 122)
	{
		return (0);
	}
	return (0);
}
