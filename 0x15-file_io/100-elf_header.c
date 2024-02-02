#include "main.h"
void display_elf_header(const Elf64_Ehdr *header);
int main(int argc, char *argv[]);

/**
* display_elf_header - Function to display ELF header information.
* @header: Information about header.
* Return: Nothing.
*/
void display_elf_header(const Elf64_Ehdr *header)
{
int i = 0;
printf("Magic: ");    

for (; i < 16; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");

printf("Class: %d-bit\n", header->e_ident[4] == 1 ? 32 : (header->e_ident[4] == 2 ? 64 : -1));

printf("Data: %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" :
(header->e_ident[5] == 2 ? "2's complement, big endian" : "Invalid"));

printf("Version: %d (current)\n", header->e_version);

printf("OS/ABI: %d\n", header->e_ident[7]);

printf("ABI Version: %d\n", header->e_ident[8]);

printf("Type: 0x%04x\n", header->e_type);
printf("Entry point address: 0x%016lx\n", header->e_entry);
}

/**
* main - Entry point.
* @argc: Number of Commandline arguments.
* @argv: Commandline vector.
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr elf_header;
    
if (argc != 2)
{
printf("Usage: elf_header <ELF file>\n");
return (98);
}

/* Open the ELF file */
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
return (98);
}

/* Read the ELF header */
if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
perror("Error reading ELF header");
close(fd);
return (98);
}

/* Check if it's a valid ELF file */
if (elf_header.e_ident[0] != 0x7f || strncmp((const char *)&elf_header.e_ident[1], "ELF", 3) != 0)
{
printf("Error: Not a valid ELF file\n");
close(fd);
return (98);
}

/* Display information from the ELF header */
display_elf_header(&elf_header);

/* Close the file */
close(fd);

return (0);
}
