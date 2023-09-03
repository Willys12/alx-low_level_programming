#include "main.h"
/**
 *_strchr - Function begins here
 *@s: Pointer to the NULL terminated string
 *@c: Character to search for
 *Return: Pointer to the first instance of 'c' or 's' or NULL
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
