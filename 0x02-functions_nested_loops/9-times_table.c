#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry point
 * Description : 'printing times table till 9'
 * Return: 0. (Success)
 */
void times_table(void)
{
	int n;
	int m;
	int x;

	for (n = 0 ; n < 10 : n++)
	{
		while (m < 10)
		{
			x = n * m;
			printf(" %i,", x);
			_putchar('\n');
			m++;
		}
	}
}
