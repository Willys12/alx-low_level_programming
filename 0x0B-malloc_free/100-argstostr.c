#include "main.h"
/**
*argstostr -  concatenates all the arguments of a program.
*@ac: Arguments passed.
*@av: Pointer  Array of strings.
*Return: Pointer to new string, NULL on failure.
*/
char *argstostr(int ac, char **av)
{
	int string_len, string_index, i;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	string_len = 0;
	for (i = 0; i < ac; i++)
	{
		string_len = string_len + strlen(av[i]) + 1;
	}
	result = (char *)malloc((string_len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	string_index = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + string_index, av[i]);
		string_index = string_index + strlen(av[i]);
		result[string_index++] = '\n';
	}
	result[string_index] = '\0';

	return (result);
}
