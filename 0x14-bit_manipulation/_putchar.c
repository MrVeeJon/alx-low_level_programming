#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes character c to the stdout
 * @c: This the character to be printed
 *
 * Return: 1 if successful, and -1 if error
 * If error, set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
