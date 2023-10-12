#include "variadic_functions.h"
/**
*print_numbers - Prints numbers.
*@separator: Separate numbers.
*@n: Number of arguments passed.
*Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int numb, i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		numb = va_arg(args, int);
		++i;
		{
			printf("%d", numb);
		}
		if (separator != NULL && i < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
