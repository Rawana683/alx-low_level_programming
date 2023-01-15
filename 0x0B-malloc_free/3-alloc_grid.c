#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width : the column
 * @height : the rows
 * description : " two dimantional array"
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width == 0 || width < 0 || height == 0 || height < 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height ; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
	}
	if (arr != NULL)
	{
		return (arr);
	}
	return (0);
}
