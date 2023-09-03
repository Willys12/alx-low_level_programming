#include "main.h"
/**
 *_memcpy - Function begins here
 *@dest: Destination memory
 *@src: Source memory
 *@n: Bytes to copy
 *Return: Pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (original_dest);
}
