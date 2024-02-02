#include <stdio.h>
#include <stdlib.h>
/**
*main - Prints all the arguments it receives.
*@argc: Counts of command line arguments.
*@argv: Arrayof ccccommand line arguments.
*Return: Integer
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
