#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* code by hamza essalhi */

void inspect_elf_function(unsigned char *id);
void inspect_elf_magic(unsigned char *id);
void inspect_elf_class(unsigned char *id);
void inspect_elf_data(unsigned char *id);
void inspect_elf_version(unsigned char *id);
void inspect_elf_abi(unsigned char *id);
void inspect_elf_osabi(unsigned char *id);
void inspect_elf_type(unsigned int type, unsigned char *id);
void inspect_elf_entry(unsigned long int entry_id, unsigned char *id);
void close_elf_file(int elf);
/**
 * close_elf_file - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf_file(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * inspect_elf_entry - Inspects and prints the entry point of an ELF header.
 * @entry: The address of the ELF entry point.
 * @id: A pointer to an array containing the ELF class.
 */
void inspect_elf_entry(unsigned long int entry, unsigned char *id)
{
	printf("  Entry point address:               ");

	if (id[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * inspect_elf_type - Prints the type of an ELF header.
 * @type: The ELF type.
 * @id: A pointer to an array containing the ELF class.
 */
void inspect_elf_type(unsigned int type, unsigned char *id)
{
	if (id[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", type);
	}
}

/**
 * inspect_elf_abi - Prints the ABI version of an ELF header.
 * @id: A pointer to an array containing the ELF ABI version.
 */
void inspect_elf_abi(unsigned char *id)
{
	printf("  ABI Version:                       %d\n",
	       id[EI_ABIVERSION]);
}

/**
 * inspect_elf_osabi - Prints the OS/ABI of an ELF header.
 * @id: A pointer to an array containing the ELF identification bytes.
 */
void inspect_elf_osabi(unsigned char *id)
{
	printf("  OS/ABI:                            ");

	switch (id[EI_OSABI])
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
		printf("<unknown: %x>\n", id[EI_OSABI]);
	}
}

/**
 * inspect_elf_data - Inspects the data of an ELF header.
 * @id: A pointer to an array containing the ELF class.
 */
void inspect_elf_data(unsigned char *id)
{
	printf("  Data:                              ");

	switch (id[EI_DATA])
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
		printf("<unknown: %x>\n", id[EI_CLASS]);
	}
}

/**
 * inspect_elf_version - Inspects the version of an ELF header.
 * @id: A pointer to an array containing the ELF version.
 */
void inspect_elf_version(unsigned char *id)
{
	printf("  Version:                           %d",
	       id[EI_VERSION]);

	switch (id[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}


/**
 * inspect_elf_class - Inspects the class of an ELF header.
 * @id: A pointer to an array containing the ELF class.
 */
void inspect_elf_class(unsigned char *id)
{
	printf("  Class:                             ");

	switch (id[EI_CLASS])
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
		printf("<unknown: %x>\n", id[EI_CLASS]);
	}
}

/**
 * inspect_elf_magic - Inspects the magic numbers of an ELF header.
 * @id: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void inspect_elf_magic(unsigned char *id)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", id[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * inspect_elf_function - Inspects whether a given file is an ELF file.
 * @id: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file,
 *	prints an error message and exits with code 98.
 */
void inspect_elf_function(unsigned char *id)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (id[index] != 127 &&
		    id[index] != 'E' &&
		    id[index] != 'L' &&
		    id[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
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
		close_elf_file(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf_file(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	inspect_elf_function(header->e_ident);
	printf("ELF Header:\n");
	inspect_elf_magic(header->e_ident);
	inspect_elf_class(header->e_ident);
	inspect_elf_data(header->e_ident);
	inspect_elf_version(header->e_ident);
	inspect_elf_osabi(header->e_ident);
	inspect_elf_abi(header->e_ident);
	inspect_elf_type(header->e_type, header->e_ident);
	inspect_elf_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf_file(o);
	return (0);
}

