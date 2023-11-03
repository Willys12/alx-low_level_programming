#include "main.h"
int main(int argc, char *argv[]);
/**
*  copy_file -  copies the content of a file to another file.
* @f_first:filename of the source file from.
* @f_last: filename of the destination file.
* Return: Nothing.
*/
void copy_file(const char *f_first, const char *f_last)
{
FILE *source_fl, *dest_fl;
int f;

source_fl = fopen(f_first, "r");
if (source_fl == NULL)
{
fprintf(stderr, "Error: Can't read from file %s\n", f_first);
exit(98);
}
dest_fl = fopen(f_last, "w");
if (dest_fl == NULL)
{
fclose(source_fl);
fprintf(stderr, "Error: Can't open file %s\n", f_last);
exit(99);
}
while ((f = fgetc(source_fl)) != EOF)
{
fputc(f, dest_fl);
}
fclose(source_fl);
fclose(dest_fl);

printf("File %s copied to %s\n", f_first, f_last);
}

/**
* main - Entry point.
* @argc: Argument count.
* @argv: Argument vector.
* Return: on success 0.
*/
int main(int argc, char *argv[])
{
const char *f_first;
const char *f_last;
if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(97);
}

f_first = argv[1];
f_last = argv[2];

copy_file(f_first, f_last);

return (0);
}
