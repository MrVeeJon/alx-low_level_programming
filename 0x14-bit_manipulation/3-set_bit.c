#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: points to the number that is subjected to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 if success and -1 if there is failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
