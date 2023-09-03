#include "main.h"
/**
 * _strlen - Function begins here
 *@s: String pointer
 *Return: Length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);

	
}
