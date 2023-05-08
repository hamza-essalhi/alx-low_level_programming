#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its content to STDOUT.
 *
 * @filename: Name of the file to be read.
 * @letters: Maximum number of letters to read.
 *
 * Return: The actual number of bytes read and printed, or 0 if the function
 *         fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	else
	{

		bytes_read = read(file_descriptor, buffer, letters);
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

		free(buffer);
		close(file_descriptor);

		return (bytes_written);
	}
}

