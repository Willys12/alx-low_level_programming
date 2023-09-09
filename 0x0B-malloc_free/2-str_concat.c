#include "main.h"
/**
 *str_concat - Entry point
 *@s1: String 1
 *@s2: String 2
 *Return: If memory allocation fail, return NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t m1, m2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	m1 = strlen(s1);
	m2 = strlen(s2);
	result = (char *)malloc((m1 + m2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
