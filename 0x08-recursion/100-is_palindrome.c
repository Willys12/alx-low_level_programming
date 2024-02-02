#include "main.h"
int palindrome_func_helper(char *s, int begin, int end);
/**
*is_palindrome - Checks if string is palindrome.
*@s: This represents string
*Return: Interger 1 represents palindrome otherwise 0.
*/
int is_palindrome(char *s)
{
	int len = strlen(s);

	{
		return (palindrome_func_helper(s, 0, len - 1));
	}
}

/**
*palindrome_func_helper - This is a helper to  the is_palindrome.
*@s: Parameter 1
*@begin: 1st parameter to help check palindrome.
*@end: 2nd parameter to help check palindrome.
*Return: Integer
*/
int palindrome_func_helper(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	else if (s[begin] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindrome_func_helper(s, begin + 1, end - 1));
	}
}
