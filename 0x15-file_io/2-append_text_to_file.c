#include "main.h"
/**
* append_text_to_file -  appends text at the end of a file.
* @filename: Represents file name.
* @text_content: Represents what is added.
*/
int append_text_to_file(const char *filename, char *text_content)
{
 FILE *file;

if (filename == NULL || text_content == NULL)
{
return -1;
}

file = fopen(filename, "a");
if (file == NULL)
{
return -1;
}

fputs(text_content, file);
fclose(file);

return 1;
}
