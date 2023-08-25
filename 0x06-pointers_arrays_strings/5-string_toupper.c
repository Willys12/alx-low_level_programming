#include "main.h"
/**
 * *string_toupper - Function begins here
 * @str: This is a pointer
 * Return: Points at the modified string
 */
char *string_toupper(char *str)
{
	char *ch = str;

	while (*str != '\0')
	{
		*str = toupper(*str);
		++str;
	}
	return (ch);
}
