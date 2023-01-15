#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - entry point
 * @b : used to assign mem
 * Description : " allocate memory"
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (!mem)
	{
		exit(98);
	}
	return (mem);
}
