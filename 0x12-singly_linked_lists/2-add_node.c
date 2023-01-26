#include "lists.h"
#include <string.h>
/**
 * add_node - adding node
 * @head : head to add to
 * @str : the first 
 * description : "add a node to the head of the list"
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *stringdup;
	int len;
	new = malloc(sizeof(list_t));
	if(new == NULL)
		return (NULL);
	stringdup = strdup(str);
	if(stringdup == NULL)
		free (new);
		return (NULL);
	for (len = 0; str[len]; len++)
		continue;
	new->str = stringdup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
