#include "main.h"
#include <unistd.h>
#include <stdio.h>
int _putchar(char c);
/**
*main - prints the name of the file it was compiled from.
*Return: 0 on success.
*/
int main(void)
{
char *s = __FILE__;
int j;

for (j = 0; s[j] != '\0'; j++)
{
_putchar(s[j]);
}
_putchar('\n');
return (0);
}
/**
*_putchar - Helper function.
*@c: Character to be printed.
*Return: integer.
*/
int _putchar(char c)
{
return (putchar(c));
}
