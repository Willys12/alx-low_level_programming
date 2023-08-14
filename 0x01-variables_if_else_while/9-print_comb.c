#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 0 ; i <= 9 ; ++i)
	{	putchar(i + '0');
		putchar(',');
	}
	putchar(9);
	return (0);
}
