#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given
 * @head: A pointer to the address of the
 * @index: The index of the node to be deleted - indices start at 0.
 * description : "delete at index"
 * Return: On success - 1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
