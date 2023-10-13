#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 *free_dlistint - Frees a dlistint_t list
 *@head: Pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *fresh;

	while (head != NULL)
	{
		fresh = head;
		head = head->next;
		free(fresh);
	}
}
