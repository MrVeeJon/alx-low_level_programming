#include "search_algos.h"

/**
 *Linear_search - Searches with a linear search.
 *@array: Points to the element of the array to search.
 *@size: Number of elements in the arrayt.
 *
 *Return: -1, if the value is absent or the array is NULL
 *         else, the first index where the value is located. 
 *
 *Description: Prints a vaule every time it is compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
