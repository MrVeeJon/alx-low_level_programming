#include "main.h"

/**
 * clear_bit - sets to 0, the value of any given bit
 * @n: points to the number to be changed
 * @index: is the index of the bit to be cleared
 *
 * Return: 1 if successful, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
