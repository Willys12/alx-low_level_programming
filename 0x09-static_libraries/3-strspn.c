#include "main.h"
/**
 * _strspn - Entry point
 *@s: Pointer to be scanned
 *@accept: Pointers containing characters
 *Return: Length of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;

	length = 0;
	while (*s && strchr(accept, *s))
	{
		length++;
		s++;
	}
	return (length);
}
