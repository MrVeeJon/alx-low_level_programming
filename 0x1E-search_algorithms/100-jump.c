#include "search_algos.h"

/**
 *jump_search - searches a sorted array of integers for a value
 * @array: Pointer to the first element of the array to search in
 * @size: The number of element in the array
 * @value: Value to search for
 *
 * Return: -1, if the value not proesent or the array is NULL,
 *	  else, the first index where the value is located.
 *
 * Description: Prints a value everytime it's compared in the array.
 *	  	Uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
