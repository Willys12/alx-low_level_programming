#include "variadic_functions.h"
/**
*print_all - Prints everything passed.
*@format: List of arguments passed.
*Return: Nothing.
*/
void print_all(const char * const format, ...)
{
int i = 0;
char c;
float f;
int numb;
va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			numb = va_arg(args, int);
			printf("%d", numb);
		}
		else if (format[i] == 's')
		{
			char *s = va_arg(args, char *);

			if (s == NULL)
			{
				printf("(nill)");
			}
else
{
printf("%s", s);
}
}
if (format[i + 1])
{
printf(", ");
}
++i;
}
printf("\n");
va_end(args);
}
