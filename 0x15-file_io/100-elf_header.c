#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void check_elf(unsigned char *elf_identity);
void print_magic(unsigned char *elf_identity);
void print_version(unsigned char *elf_identity);
void print_class(unsigned char *elf_identity);
void print_data(unsigned char *elf_identity);
void print_os_abi(unsigned char *elf_identity);
void print_abi(unsigned char *elf_identity);
void print_type(unsigned int elf_type, unsigned char *elf_identity);
void print_entry(unsigned long int elf_entry, unsigned char *elf_identity);
void close_elf(int elf);

/**
 * check_elf - checks if file is elf
 * @elf_identity: array of magic numbers
 *
 * Return: Nothing
 */
void check_elf(unsigned char *elf_identity)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_identity[i] != 127 && elf_identity[i] != 'E'
			&& elf_identity[i] != 'L' && elf_identity[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - outputs magic numbers
 * @elf_identity: array of magic numbers
 *
 * Return: Nothing
 */
void print_magic(unsigned char *elf_identity)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_identity[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_version - outputs version
 * @elf_identity: array of magic numbers
 *
 * Return: Nothing
 */
void print_version(unsigned char *elf_identity)
{
	printf("Version: %d", elf_identity[EI_VERSION]);

	switch (elf_identity[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_class - outputs class
 * @elf_identity: array of magic numbers
 *
 * Return: Nothing
 */
void print_class(unsigned char *elf_identity)
{
	printf("Class:");

	switch (elf_identity[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;

		case ELFCLASS32:
			printf("ELF32\n");
			break;

		case ELFCLASS64:
			printf("ELF64\n");
			break;

		default:
			printf("<unknown: %x>\n", elf_identity[EI_CLASS]);
	}
}

/**
 * print_data - outputs data of elf
 * @elf_identity: array of magic numbers
 *
 * Return: nothing
 */
void print_data(unsigned char *elf_identity)
{
	printf("Data:");

	switch (elf_identity[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_identity[EI_DATA]);

	}
}

/**
 * print_os_abi - outputs O/S and ABI
 * @elf_identity: array of magic numbers
 *
 * Return: nothing
 */
void print_os_abi(unsigned char *elf_identity)
{
	printf("OS/ABI:");

	switch (elf_identity[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_identity[EI_OSABI]);
	}
}

/**
 * print_abi - outputs ABI version
 * @elf_identity: array of magic numbers
 *
 * Return: nothing
 */
void print_abi(unsigned char *elf_identity)
{
	printf("ABI Version: %d\n", elf_identity[EI_ABIVERSION]);
}

/**
 * print_type - outputs type
 * @elf_type: ELF type
 * @elf_identity: array of magic numbers
 *
 * Return: Nothing
 */
void print_type(unsigned int elf_type, unsigned char *elf_identity)
{
	if (elf_identity[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("Type:");

	switch (elf_type)
	{
		case ET_NONE:
			printf("NONE (none)\n");
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
			printf("<unknown: %x>\n", elf_type);

	}
}

/**
 * print_entry - output entry point
 * @elf_entry: entry point adddress
 * @elf_identity: array of magic numbers
 *
 * Return: nothing
 */
void print_entry(unsigned long int elf_entry, unsigned char *elf_identity)
{
	printf("Entry point address:");

	if (elf_identity[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) | ((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elf_identity[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);
	else
		printf("%#lx\n", elf_entry);
}

/**
 * close_elf - closes ELF
 * @elf: fd
 *
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - display info in ELF
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0 (success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: %s: no such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_os_abi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
