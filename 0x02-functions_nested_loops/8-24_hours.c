#include "main.h"
/**
 * jack_bauer - The start of function
 * hours:This shows the hours
 * minutes: this shows minutes
 * Return: Always void
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0 ; hours < 24 ; ++hours)
		{
		for (minutes = 0 ; minutes < 60 ; ++minutes)
		{
		_putchar('0' + hours / 10);
		_putchar('0' + hours % 10);
		_putchar(':');
		_putchar('0' + minutes / 10);
		_putchar('0' + minutes % 10);
		_putchar('\n');
		}
		}
}
