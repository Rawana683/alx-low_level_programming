#include "main.h"
#include <stdio.h>
/**
 *reset_to_98 - entry point
 * @n : the pointer
 * Descrtiption: 'using pointer'
 * Return : 0. (Success)
 */
void reset_to_98(int *n)
{
	int m;
	int *p;

	m = 98;
	p = &m;
	*n = *p;
}
