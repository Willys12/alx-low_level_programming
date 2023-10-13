#include "variadic_functions.h"
/**
*print_all - Prints everything passed.
*@format: List of arguments passed.
*Return: Nothing.
*/
void print_all(const char * const format, ...)
{
	int numb = 0, i = 0;
	char c = '\0';
	float f = 0.0;
	char *s;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
	{
		case 'i':
		numb = va_arg(args, int);
		printf("%d", numb);
		break;
		case 'f':
		f = va_arg(args, double);
		printf("%f", f);
		break;
		case 'c':
		c = va_arg(args, int);
		printf("%c", c);
		break;
		case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		printf("(nil)");
		else
		printf("%s", s);
		break;
		default:
		++i;
		continue;
	}
		if (format[i + 1])
		printf(", ");
		++i;
	}
	printf("\n");
	va_end(args);
}
