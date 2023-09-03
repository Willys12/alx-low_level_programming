#include "main.h"
/**
 * *_strcat - Entry point
 *@dest: Pointer to destination string
 *@src: Pointer to source string
 *Return: A pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

