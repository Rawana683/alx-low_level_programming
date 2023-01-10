#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - entry point
 * @size : the size of int
 * @c : char to use
 * Desciption : "array of chars "
 * Return: array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size ; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
