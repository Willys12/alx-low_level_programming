#include "variadic_functions.h"
/**
*sum_them_all - Prints no. of args passed.
*@n: Number of arguments.
*Return: integer.
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, j = 0, total = 0;
va_list args;
va_start(args, n);

if (n == 0)
{
return (0);
}
while (j < n)
{
i = va_arg(args, unsigned int);
total += i;
++j;
}
va_end(args);
return (total);
}
