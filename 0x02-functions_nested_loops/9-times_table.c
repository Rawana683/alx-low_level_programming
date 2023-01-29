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
	int a;
	int r;

	for (n = 0 ; n < 10 ; n++)
	{
		for (a = 0; a < 10; a++)
		{
		
			r = n * a;
			printf("%d", r);
			if (a != 9)
			{
			printf(",");
			if (r > 9)
			{
				printf(" ");
			}
			else
			{
				printf("  ");
			}
			}
			
		}
		printf("\n");
	}
}
