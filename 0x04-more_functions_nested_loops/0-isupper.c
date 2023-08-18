#include "main.h"
/**
 * _isupper - Beginning of the function
 * @c: Letter to checked
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'b')
	{
		return (0);
	}
	return (0);
}
