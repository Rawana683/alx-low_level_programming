#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - entry point
 * @d : pointer to struct
 * Description : "print the function in certai format"
 * Return: 0.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
