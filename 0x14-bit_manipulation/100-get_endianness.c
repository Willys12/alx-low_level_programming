#include "main.h"

/**
* get_endianness -  checks the endianness.
* Return: Int value.
*/
int get_endianness(void)
{
unsigned int x = 1;
char *byte = (char *)&x;

return ((int)*byte);
}
