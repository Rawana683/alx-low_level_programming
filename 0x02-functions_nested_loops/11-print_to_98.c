#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - entry point
 *@n : number entered by user
 * Description: 'printing natural numbers'
 * Return: 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	while (n < 98)
	{	printf("%d, ", n);
		n++;
	}
	printf("%d\n", n);
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
