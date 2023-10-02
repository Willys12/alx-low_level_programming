#include <stdio.h>
#include <stdlib.h>
/**
*main - This function multiplies two numbers
*@argc: Argument count
*@argv: Argument vector
*Return: Integer
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = (num1) * (num2);

	printf("%d\n", result);
	return (0);
}
