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
int j = 0;

while (s[j] != '\0')
{
_putchar(s[j]);
++j;
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
