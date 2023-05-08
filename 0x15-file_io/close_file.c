#include "main.h"

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
