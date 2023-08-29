#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: Pointer to the string being searched in
 * @accept: Pointer to the string with bytes
 * Return: NULL or pointer to the first matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
			return (s);
		++s;
	}
	return (NULL);
}
