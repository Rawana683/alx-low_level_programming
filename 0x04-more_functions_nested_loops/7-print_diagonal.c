#include "main.h"

/**
 * print_diagonal - entry point
 * @n : numer to print
 * Description : 'print diagonally '
 * Return: 0. (Success)
 */
void print_diagonal(int n)
{
	int i;
	int m;

	if (n <= 0)
	{
		_putchar(' ');
	}
	for (i = 0 ; i < n ; i++)
	{
		for (m = 0 ; m < i ; m++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
