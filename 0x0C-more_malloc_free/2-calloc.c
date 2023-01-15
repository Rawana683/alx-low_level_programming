#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - entry ppoint
 * @nmemb : intger to use
 * @size : intger to use
 * description: " allocate mem to array"
 * Return: 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size) ; i++)
	{
		*(s + i) = 0;
	}
	return (s);
}
