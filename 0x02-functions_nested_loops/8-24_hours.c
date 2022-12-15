#include "main.h"
#include <stdio.h>
/**
 * jack_bauer -success Entry point
 * Description9 : 'printing the minutes '
 * Return: 0. (Success)
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m <= 59 ; m++)
		{
			printf("%02d:%02d\n", h, m);
		}
	}
}
