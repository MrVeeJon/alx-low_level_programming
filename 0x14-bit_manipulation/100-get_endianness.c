#include "main.h"

/**
 * get_endianness - checks a machine if little or big endian
 * Return: 0 if big and 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
