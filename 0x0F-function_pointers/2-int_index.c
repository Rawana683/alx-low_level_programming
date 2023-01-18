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
/*	int (*c)(int);
*/

	if (size <= 0)
	{
		 return (-1);
	}
	for (i = 0 ; i < size ; i++)
		{
			cmp(array[i]);
			if (!(cmp))
			{
			return (-1);
			}
		}

	return (i);
}
