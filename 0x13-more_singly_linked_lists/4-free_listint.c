#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free listint
 * @head : head node
 * description : " add node at the end"
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
