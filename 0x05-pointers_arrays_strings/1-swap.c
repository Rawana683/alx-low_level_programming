#include "main.h"
#include <stdio.h>
/**
 *swap_int - entry point
 * @a : number 1
 * @b : number 2
 * Description : ' swaping numbers '
 * Return: 0. (Success)
 */
void swap_int(int *a, int *b)
{
	int one;

	one = *a;
	*a = *b;
	*b = one;
}
