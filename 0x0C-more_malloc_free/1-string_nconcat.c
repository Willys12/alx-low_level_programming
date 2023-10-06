#include "main.h"
/**
*string_nconcat - concatenates two strings.
*@s1: String 1.
*@s2: String 2.
*@n: Number of bytes
*Return: Pointer to the concatenated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int len_1 = 0;
unsigned int len_2 = 0;
unsigned int entire_len = 0;
unsigned int i;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len_1 = strlen(s1);
len_2 = strlen(s2);
concat_str = malloc(n * sizeof(char));
if (concat_str == NULL)
{
return (NULL);
}
if (n >= len_2)
{
entire_len = len_1 + len_2;
}
else
{
entire_len = len_1 + n;
}
for (i = 0; i < len_1; i++)
{
concat_str[i] = s1[i];
}
for (i = 0; i < len_2 && i < n; i++)
{
concat_str[len_1 + i] = s2[i];
}
concat_str[entire_len] = '\0';

return (concat_str);
}
