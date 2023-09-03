#include "main.h"
/**
 *_strpbrk - Function begins here
 *@s: Pointer to the NULL terminating string to  be scanned
 *@accept: Pointer containing characters
 *Return: Pointer to first occurence of any character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				return (s);
			}
			accept_ptr++;
		}
		s++;
	}
	return (NULL);
}
