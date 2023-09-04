#include "main.h"

/**
 * create_file - Used to create a file
 * @filename: This points to the name of the file to be created
 * @text_content: This points to the string to be writen to file
 *
 * Return: Will return -1 if the function fails, and 1 on succes
 *         Also -1 if NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
