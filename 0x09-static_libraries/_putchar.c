#include "main.h"
/**
 * _putchar - function starts here
 *@c: Working character
 *Return: Character c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
