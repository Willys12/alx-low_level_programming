#include "main.h"
/**
 * _abs - Beginning of function
 * @i: The number being used
 * Return: Absolute value of integer
 */
int _abs(int i)

{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
