#include "main.h"
/**
 * rev_string - Entry point
 * @s: The working string
 * REturn: Always void
 */
void rev_string(char *s)
{
	int n, m;

	m = 0;
	for (n = 0 ; s[n] != '\0' ; ++n)
		++m;
	for (n = 0 ; n < m / 2 ; ++n)
	{
		char k;

		k = s[n];
		s[n] = s[m - 1 - n];
		s[m - 1 - n] = k;
	}
}
