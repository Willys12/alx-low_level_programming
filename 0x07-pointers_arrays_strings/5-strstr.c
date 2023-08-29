#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: Pointer to string to search
 * @needle: Pointer to the substring to find
 * Return: Always NULL or pointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *j = haystack;
		char *n = needle;

		while (*n && *j == *n)
		{
			++j;
			++n;
		}
		if (*n == '\0')
			return (haystack);
		++haystack;
	}
	return (NULL);
}
