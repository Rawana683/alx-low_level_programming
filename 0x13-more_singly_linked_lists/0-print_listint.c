#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print elements
 * @h : our struct
 * description : "print elements and return count"
 * Return: no of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}
		count++;
		h = h->next;
	}
	return (count);
}
