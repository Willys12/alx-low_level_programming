#include "main.h"
/**
 * cap_string - Function begins here
 * @str: This is the working string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ch = str;
	int k = 1;

	while (*str)
	{
		if (k && islower(*str))
			*str = toupper(*str);
		k = (*str == ' ' || *str == '\t' ||
			*str == '\n' || *str == ',' ||
			*str == ';' || *str == '.' ||
			*str == '!' || *str == '?' ||
			*str == '"' || *str == '(' ||
			*str == ')' || *str == '{' ||
			*str == '}');
		++str;
	}
	return (ch);
}
