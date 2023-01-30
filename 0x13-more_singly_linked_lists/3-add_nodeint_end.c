#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint_end - add end node
 * @head : head node
 * @n : int in stuct
 * description : "add end node"
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (new);
}
