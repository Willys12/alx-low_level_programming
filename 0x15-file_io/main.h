#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

typedef struct {
    uint8_t  e_ident[16]; /* ELF identification */
    uint16_t e_type;      /* Object file type */
    uint16_t e_machine;   /* Architecture */
    uint32_t e_version;   /* Object file version */
    uint64_t e_entry;     /* Entry point virtual address */
    uint64_t e_phoff;     /* Program header table offset */
    uint64_t e_shoff;     /* Section header table offset */
    uint32_t e_flags;     /* Processor-specific flags */
    uint16_t e_ehsize;    /* ELF header size */
    uint16_t e_phentsize; /* Size of program header entry */
    uint16_t e_phnum;     /* Number of program header entries */
    uint16_t e_shentsize; /* Size of section header entry */
    uint16_t e_shnum;     /* Number of section header entries */
    uint16_t e_shstrndx;  /* Section name string table index */
} Elf64_Ehdr;

#define BUFFER_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void display_elf_header(const Elf64_Ehdr *header);
int main(int argc, char *argv[]);
#endif
