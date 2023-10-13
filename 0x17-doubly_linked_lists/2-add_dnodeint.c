#include<stdlib.h>
#include<stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the list.
 * @n: The value to store in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_Node == NULL)
	{
		return (NULL);
	}
	new_Node->n = n;
	new_Node->prev = NULL;
	if (*head == NULL)
	{
		new_Node->next = NULL;
	}
	else
	{
		new_Node->next = *head;
		(*head)->prev = new_Node;
	}
	*head = new_Node;
	return (new_Node);
}
