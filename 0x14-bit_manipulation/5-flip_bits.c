#include "main.h"
/**
* flip_bits -  returns the number of bits you would need to flip.
* @n: The first unsigned long integer.
* @m:The second unsigned long integer.
* Return: The number of bits that need to be flipped.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int times = 0;
unsigned long int result = n ^ m;

while (result)
{
times += result & 1;
result >>= 1;
}
return (times);
}
