#include "lists.h"
#include <stdio.h>

/**
*print_dlistint - Prints the elements of a list
*dlistint_t: The structure that holds the list
*@h: Pointer to the structure
*Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
