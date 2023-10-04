#include "main.h"
/**
*str_concat - concatenates two strings.
*@s1: First input string.
*@s2: Second input string.
*Return: The concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	char *concatenate;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concatenate = malloc(((len1 + len2) + 1) * sizeof(char));
	if (concatenate == NULL)
	{
		return (NULL);
	}
	strcpy(concatenate, s1);
	strcat(concatenate, s2);

	return (concatenate);
}
