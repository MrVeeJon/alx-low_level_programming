#include "lists.h"

/**
 *dlistint_len - counts the number of nodes
 *dlistint_t: structure containing the lists of nodes
 *@h: Pointer to structure
 *Return: number of nodes counted
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
