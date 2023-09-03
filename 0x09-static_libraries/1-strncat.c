#include "main.h"
/**
 * *_strncat - Entry point
 *@dest: Pointer to destination string
 *@src: Pointer to source string
 *@n: Character to concatenate
 *Return: Pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}
