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
int source_fd, dest_fd;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

source_fd = open(f_first, O_RDONLY);
if (source_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_first);
exit(98);
}

dest_fd = open(f_last, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (dest_fd == -1)
{
close(source_fd);
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", f_last);
exit(99);
}

while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1)
{
close(source_fd);
close(dest_fd);
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", f_last);
exit(99);
}
}

if (bytes_read == -1)
{
close(source_fd);
close(dest_fd);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_first);
exit(98);
}

if (close(source_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
exit(100);
}

if (close(dest_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
exit(100);
}

if (chmod(f_last, 0664) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't set file permissions for %s\n", f_last);
exit(101);
}

printf("File %s copied to %s\n", f_first, f_last);
}

/**
* main - Entry point.
* @argc: Argument count.
* @argv: Argument vector.
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
const char *f_first;
const char *f_last;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

f_first = argv[1];
f_last = argv[2];

copy_file(f_first, f_last);

return (0);
}
