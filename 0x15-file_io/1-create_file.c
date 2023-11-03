#include "main.h"
/**
* create_file - a function that creates a file.
* @filename: name of the file to create.
* @text_content: NULL terminated string to write to the file.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int j;
ssize_t count;
ssize_t length = 0;

if (!filename)
{
return (-1);
}
j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (j == -1)
{
return (-1);
}
if (fchmod(j, S_IRUSR | S_IWUSR))
{
close(j);
return (-1);
}
if (text_content)
{
length = strlen(text_content);
count = write(j, text_content, length);
if (count == -1 || count != length)
{
close(j);
return (-1);
}
}
close(j);

return (-1);
}
