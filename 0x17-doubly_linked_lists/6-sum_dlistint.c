#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 *sum_dlistint - Fetches the sum of all data in the dlistint_t list.
 *@head: Points to the head of the list.
 *Return: sum of all the data or 0 if the the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *fresh = head;

	while (fresh != NULL)
	{
		sum += fresh->n;
		fresh = fresh->next;
	}
	return (sum);
}
