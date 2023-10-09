#include "main.h"
#include <unistd.h>
#include <stdio.h>
#define FILE_NAME "2-main.c"
int _putchar(char c);
/**
*main - prints the name of the file it was compiled from.
*Return: 0 on success.
*/
int main(void)
{
int j = 0;

while (FILE_NAME[j] != '\0')
{
_putchar(FILE_NAME[j]);
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
