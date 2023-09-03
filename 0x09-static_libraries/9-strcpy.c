#include "main.h"
/**
 *_strcpy - Function begins
 *@dest: Destination string
 *@src: source string
 *Return: Pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
