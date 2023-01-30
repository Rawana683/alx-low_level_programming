#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free lists
 * @head : pointer to struct
 * Description: "free lists and set head to null"
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;


	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
