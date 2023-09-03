#include "main.h"
/**
 *_isalpha - Entry point
 * @c: Parameter to be checked
 *Return: 1 if parameter is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
