#include "main.h"
/**
*_strlen - This checks a length of string.
*@s: This is a string pointer.
*Return: Length of string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}
