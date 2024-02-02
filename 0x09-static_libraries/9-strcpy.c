#include "main.h"
/**
 * _strncpy - Function begins here
 * @n: The character being copied
 * @src: This is source
 * @dest: This is destination
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
