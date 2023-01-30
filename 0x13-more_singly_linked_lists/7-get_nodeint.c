#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node at index
 * @head : head node
 * @index : index to use
 * description: "get node at index"
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodei = 0;

	for (nodei = 0; nodei < index; nodei++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
