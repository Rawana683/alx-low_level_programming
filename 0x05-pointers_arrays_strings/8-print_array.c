#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 * @a : number to print
 * @n : number also
 * Description: 'print number of elment'
 * Return: 0. (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
