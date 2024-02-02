#include "main.h"
/**
* _memcpy - Entry point
* @n: This is the number of bytes
* @dest: Pointer to the destination
* @src: Pointer to source string.
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; ++j)
	{
		dest[j] = src[j];
	}
	return (dest);
}
