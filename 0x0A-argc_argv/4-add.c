#include <stdio.h>
#include <stdlib.h>
/**
*main - This function adds two numbers.
*@argc: Count of command line arguments.
*@argv: Array of command line arguments.
*Return: Integer
*/
int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
