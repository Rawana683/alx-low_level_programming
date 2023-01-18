#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - entry point
 * @array : array pointer
 * @size : size of array
 * @action : function to excute
 * description: "excute a function on each eelement of array"
 * Return: 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
