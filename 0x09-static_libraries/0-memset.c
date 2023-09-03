#include "main.h"
/**
 *_memset - Entry point
 *@s: Pointer to string
 *@b: Value to set
 *@n: Number of bytes to set
 *Return: pointer to memory
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
