#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node end
 * @head : beginning node
 * @str : str to dup
 * description : " add node at the end"
 * Return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	char *stringdup;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	stringdup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
		continue;
	}
	new->str = stringdup;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
