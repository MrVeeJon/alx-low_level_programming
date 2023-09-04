#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a file and prints to the standard output (STDOUT)
 * @filename: an already read text file
 * @letters: all the available number of letters to be read
 * Return: w- the read and printed number of bytes
 *        0 when filename is NULL or when function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
