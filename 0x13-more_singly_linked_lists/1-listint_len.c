#include "lists.h"
#include <stdio.h>
/**
 * listint_len - print no elements
 * @h : linked list
 * description : "print no of elements"
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
