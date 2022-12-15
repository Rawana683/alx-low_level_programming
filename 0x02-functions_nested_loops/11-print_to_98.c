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
	while (n <= 98)
	{
		printf(" %i,", n);
		putchar(',');
		putchar(' ');
		n++;
	}
	}
	else
	{
		while (n > 98)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
			n--;
		}
	}
}
