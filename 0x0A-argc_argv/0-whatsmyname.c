#include <stdio.h>
/**
*main - Prints the program name.
*@argc: Counts of arguments in command line
*@argv: Array of commandline arguments
*Return: Integer.
*/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
