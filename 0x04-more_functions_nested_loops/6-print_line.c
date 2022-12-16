#include "main.h"

/**
 * print_line - entry point
 * @n : numer used
 * Description: 'drawing a straight line:
 * Return : 0. (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
