#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *filename);
void close_file_descriptor(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @filename: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Cannot allocate buffer for file '%s'\n", filename);
		exit(99);
	}

	return (buffer);
}


/**
 * close_file_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		fprintf(stderr, "Error: Failed to close file descriptor %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp SOURCE DEST\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	source_fd = open(argv[1], O_RDONLY);
	bytes_read = read(source_fd, buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_fd == -1 || bytes_read == -1)
		{
			fprintf(stderr, "Error: Cannot read from source file '%s'\n", argv[1]);
			free(buffer);
			exit(98);
		}

		bytes_written = write(dest_fd, buffer, bytes_read);
		if (dest_fd == -1 || bytes_written == -1)
		{
			fprintf(stderr, "Error: Cannot write to destination file '%s'\n", argv[2]);
			free(buffer);
			exit(99);
		}

		bytes_read = read(source_fd, buffer, 1024);
		dest_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (bytes_read > 0);

	free(buffer);
	close_file_descriptor(source_fd);
	close_file_descriptor(dest_fd);

	return (0);
}

