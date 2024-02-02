#include "main.h"
/**
 * leet - Function begins here
 * @str: The working string
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
	char *ch = str;
	char *k = "aAeEoOtTlL";
	char *m = "4433007711";
	int i, j;

	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		for (j = 0 ; k[j] != '\0' ; ++j)
		{
			if (str[i] == k[j])
			{
				str[i] = m[j];
				break;
			}
		}
	}
	return (ch);
}
