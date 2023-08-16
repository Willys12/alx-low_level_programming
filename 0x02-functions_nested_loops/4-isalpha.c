#include "main.h"
/**
 * _isalpha - The beginning of a function
 * @c: The letter being checked
 * Return: 1 for specified values 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	{
		return (0);
	}
}
