#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *more_numbers - Entry point
 * Description : 'printing more numbers'
 * Return: 0. (Success)
 */
void more_numbers(void)
{
	int n;
	int c;

	for (n = 0; n < 10 ; n++)
	{
		for (c = 0 ; c <= 14 ; c++)
		{
			printf("%d, ", c);
			if (c >= 10)
			{
				_putchar('1');
				_putchar(n % 10 + '0');
			}
				_putchar('\n');
		}
	}
}
