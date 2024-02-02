#include "main.h"
/**
*_strdup - Returns a pointer to a newly allocated space in memory.
*@str: Input string.
*Return: Pointer to the duplicated string.
*/
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = malloc((strlen(str) + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
