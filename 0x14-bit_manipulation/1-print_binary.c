#include "main.h"
/**
* print_binary - Prints the binary representation of a number.
* @n: Number to print in binary.
* Return: Nothing.
*/
void print_binary(unsigned long int n)
{
unsigned long int mask;
int bits = 0;
int j = 63;

for (; j >= 0; j--)
{
mask = 1UL << j;

if (n & mask)
{
_putchar ('1');
bits = 1;
}
else if (bits)
{
_putchar('0');
}
}
if (!bits)
{
_putchar('0');
}
}
