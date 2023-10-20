#include "lists.h"
/**
* before_main - A function that is executed before the main function.
* Return: void
*/
void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

