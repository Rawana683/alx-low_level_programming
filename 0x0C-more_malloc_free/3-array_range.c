#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - entry point
 * @min : intger touse
 * @max : intger to use
 * Description : "create array "
 * Return: array
 */
int *array_range(int min, int max)
{
	int *s;
	int len;
	int i;

	len = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * len);
	if (!s)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = min++;
	}
	return (s);
}
