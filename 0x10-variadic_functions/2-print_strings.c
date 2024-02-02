#include "variadic_functions.h"
/**
*print_strings - Prints strings.
*@separator: Separates strings.
*@n: Number of arguments.
*Return: Nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);
		++i;
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
