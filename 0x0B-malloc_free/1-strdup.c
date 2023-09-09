#include "main.h"
/**
 *_strdup - Entry point
 *@str: The input string
 *Return: If the str is NULL return NULL
 */
char *_strdup(char *str);
{
	size_t len;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	*duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
