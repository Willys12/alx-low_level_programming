#include "main.h"
/**
*_strchr - The entry point
*@s: The pointer to NULL terminating string
*@c: Character to search for.
*Return: Pointer to the first instance of 's' and 'c' or NULL.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
