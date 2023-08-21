#include "main.h"
/**
 * _strlen - Beginning of the function
 * @s: string length
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i, j;

	j = 0;
	for (i = 0 ; s[i] != '\0' ; ++i)
		++j;
	return (j);
}
