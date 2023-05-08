#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @filename: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_temp(char *filename)
{
	char *temp;

	temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(100);
	}

	return (temp);
}


/**
 * close_file - Closes file.
 * @filename: The filename to be closed.
 */

void close_file(int filename)
{
	int _close;

	_close = close(filename);

	if (_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filename);
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
	int file_from, file_to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_temp(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(file_to, buf, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	}

	free(buf);
	close(file_from);
	close(file_to);

	return (0);
}

