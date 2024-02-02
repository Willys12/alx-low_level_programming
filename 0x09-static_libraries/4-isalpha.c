#include "main.h"
/**
*_isalpha - Checks for alphabet
*@c: Character to be checked
*/
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
