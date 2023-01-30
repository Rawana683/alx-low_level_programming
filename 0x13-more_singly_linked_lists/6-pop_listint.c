#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - delete head node
 * @head : pointer to head
 * description: " delete head node"
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
		tmp = *head;
		i = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (i);
}
