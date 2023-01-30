#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sum all n
 * @head : head node
 * description : "sum of all ata in list"
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += (head->n);
		head = head->next;
	}
	return (sum);
}
