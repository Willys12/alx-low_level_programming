#include "main.h"
/**
 *_strncpy - Entry point
 *@n: Characters to copy
 *@src: Source string
 *@dest: Destination string
 *Return: Pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		dest++;
		n--;
	}
	return (original_dest);


}
