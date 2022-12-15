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

	while (n < 10)
	{
		for (c = '0' ; c <= '14' ; c++)
		{
			_putchar(c);
			if (c == '14')
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
