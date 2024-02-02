#include "main.h"
/**
 * _strspn - Entry point
 * @s: Pointer to the string being search
 * @accept: Pointer to the string with characters
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;

	length = 0;
	while (*s && strchr(accept, *s))
	{
		++length;
		++s;
	}
	return (length);
}

