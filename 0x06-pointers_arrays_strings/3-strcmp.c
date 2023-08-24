#include "main.h"
/**
 * strcmp - Function begins here
 * @s1: First string
 * @s2: Second string
 * Return: 0;
 */
int _strcmp(char *s1, char *s2)
{
	int k;
	int l;

	k = 0;
	l = s1[k] - s2[k];
	for (k = 0 ; s1[k] != '\0' || s2[k] != '\0' ; ++k)
	{
		if (s1[k] != s2[k])
		{
			if (s1[k] < s2[k])
				return (l);
			else if (s2[k] < s1[k])
				return (l);
		}
	}
	return (0);
}
