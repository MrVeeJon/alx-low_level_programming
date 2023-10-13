#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 *@head: Points to the head of the list.
 *@index: The number from 0, of th node to retrieve.
 *Return: The nth node or NULL if node does not exit.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *fresh = head;

	while (fresh != NULL && count < index)
	{
		fresh = fresh->next;
		count++;
	}
	return (count == index ? fresh : NULL);
}
