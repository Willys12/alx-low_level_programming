#include "main.h"
/**
 * _atoi - Entry point
 *@s: Pointer to the NULL terminated string
 *Return: Converter integer
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int j = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			++i;
		}
	}
	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		j = (i * 10) + (s[i] - '0');
		++i;
	}
	j *= sign;
	return (j);
}
