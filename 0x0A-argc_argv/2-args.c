#include <stdio.h>
/**
 *main - The function that prints programs
 *@argc: Argument count
 *@argv: Argument vector
 *Return: Integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
