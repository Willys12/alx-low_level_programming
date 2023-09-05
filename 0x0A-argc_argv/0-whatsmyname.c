#include <stdio.h>
/**
 *main - Fuction begins here
 *@argc: Number of command line arguments
 *@argv: Array of strings containing command line arguments
 *Return: Integer
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
