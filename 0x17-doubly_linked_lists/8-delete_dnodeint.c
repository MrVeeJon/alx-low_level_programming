#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at a specified index of the list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to be deleted (starting from 0).
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *fresh = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = fresh->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(fresh);
		return (1);
	}

	while (fresh != NULL && count < index)
	{
		fresh = fresh->next;
		count++;
	}
	if (fresh != NULL)
	{
		fresh->prev->next = fresh->next;
		if (fresh->next != NULL)
			fresh->next->prev = fresh->prev;
		free(fresh);
		return (1);
	}
	return (-1);
}
