#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - entry point
 * @array : array of int
 * @size : size of array
 * @cmp : pointer to use
 * Description : "function to search an int"
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		 return (-1);
	}
	for (i = 0 ; i < size ; i++)
		{
			if (cmp(*(array + i)))
			{
				return (i);
			}
		}
	return (-1);
}
