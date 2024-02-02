#include "main.h"
/**
 * _strcat - Function begins here
 * @src: This is the source
 * @dest: This is the destination
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destLen;
	int srcLen;

	destLen = 0;
	srcLen = 0;
	for (i = 0 ; dest[i] != '\0' ; ++i)
		++destLen;
	for (i = 0 ; src[i] != '\0' ; ++i)
		++srcLen;
	for (i = 0 ; i <= srcLen; ++i)
		dest[destLen + i] = src[i];
	return (dest);
}
