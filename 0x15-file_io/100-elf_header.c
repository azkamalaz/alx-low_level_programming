#include "main.h"
/**
 * Print the information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;


	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_ident[EI_CLASS]);
	}

	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_ident[EI_DATA]);
	}

	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "<unknown>");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_type);
	}

	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}
/**
 * Main function to display ELF header information.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return - Returns 0 on success or 98 on error.
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("read");
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		{
		fprintf(stderr, "%s: Not an ELF file\n", filename);
		close(fd);
		return (98);
		}

	print_elf_header(&header);
	close(fd);
	return (0);
}
