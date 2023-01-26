#include "lists.h"
/**
 * list_len - elements in list
 * @h : linked list
 * description : "print elements in list"
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
