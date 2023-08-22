#include "main.h"
/**
 * *_strcpy - Entry point
 * @dest: This is our destination
 * @src: This is our source
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0' ; ++m)
		dest[m] = src[m];
	dest[m] = '\0';
	return (dest);
}
