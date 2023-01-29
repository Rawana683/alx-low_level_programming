#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry point
 * Description : 'printing times table till 9'
 * Return: 0. (Success)
 */
void times_table(void)
{
	int n, a, r;

	for (n = 0 ; n < 10 ; n++)
	{
		for (a = 0; a < 10; a++)
		{
			r = n * a;
			if (r > 9)
			{
				printf(" %d", r);
				if (a != 9)
					printf(",");
			}
			else if (r <= 9)
			{
				if (n == 0)
				{
					printf("0");
					if (a != 9)
					{
						printf(",");
						printf("  ");
					}
				}
				else
				{
					if (r == 0)
						printf("0,");
					else
					{
					printf("  ");
					printf("%d", r);
					if (a != 9)
						printf(",");
					}
				}
			}
		}
		printf("\n");
	}
}
