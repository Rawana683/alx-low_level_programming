#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adding node
 * @head: struct pointer
 * @n : int in struct
 * description : "add a new node at the beginning"
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
