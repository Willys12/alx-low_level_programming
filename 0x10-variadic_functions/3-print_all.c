#include "variadic_functions.h"
/**
*print_all - Prints everything passed.
*@format: List of arguments passed.
*Return: Nothing.
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *x;
	char *s = "";
	va_list args;

	va_start(args, format);
	while (format[i] && format)
	{
	if (i > 0)
		printf("%s", s);
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(args, int));
	break;
	case 'i':
		printf("%d", va_arg(args, int));
	break;
	case 'f':
		printf("%f", va_arg(args, double));
	break;
	case 's':

		x = va_arg(args, char *);
		if (!x)
			printf("(nil)");
		else
			printf("%s", x);

	break;
	default:
	break;
	}
	s = ", ";
	i++;
	}
	printf("\n");
	va_end(args);
}
