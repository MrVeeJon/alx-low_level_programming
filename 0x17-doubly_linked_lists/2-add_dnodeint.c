#include<stdlib.h>
#include<stdio.h>
#include "lists.h"

/*
 *@add_dnodeint - function that creates a new node
 *dlistint_t - element type in the list
 *@n: Data contained in the new node
 *@head: Pointer to the pointer to the first node
 *Return: address of new node if succesful, or NULL if failed
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
