#include <stdio.h>
/**
*main - Prints the number of arguments passed to it.
*@argc: Counts of commandline arguments.
*@argv: Array of commandline arguments.
*Return: Integer.
*/
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
