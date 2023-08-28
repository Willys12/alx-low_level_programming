#include "main.h"
/**
 * _memset - Main function begins here.
 * @s: The working pointe.r
 * @b: The constant byte.
 * @n: The number of bytes.
 * Return: The pointer to the memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; ++j)
	{
		s[j] = b;
	}
	return (s);
}
