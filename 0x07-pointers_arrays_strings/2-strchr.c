#include "main.h"
/**
 * _strchr - This is the main function
 * @s: Pointer to the string
 * @c: Character being located
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			++s;
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
