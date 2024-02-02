#include "main.h"
/**
 * _strcmp - Function begins here
 * @s1: First string
 * @s2: Second string
 * Return: 0;
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	for (k = 0 ; s1[k] != '\0' || s2[k] != '\0' ; ++k)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	}
	return (0);
}
