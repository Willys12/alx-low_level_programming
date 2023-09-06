#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Function that adds two positive numbers
 *@argc: Argument count
 *@argv: Argument vector
 *Return: Integer
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;
	char *arg;

	/*If no number is passed print 0*/
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	/*This loops through each command line argument*/
	for (i = 1 ; i < argc ; i++)
	{
		arg = argv[i];
		/*If the argument passed is a positive number if not prints error*/
		for (j = 0 ; arg[j] != '\0' ; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
