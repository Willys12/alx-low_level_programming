#include <stdio.h>
#include <stdlib.h>
/**
 *main - Function that adds two positive numbers
 *@argc: Argument count
 *@argv: Argument vector
 *Return: Integer
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
