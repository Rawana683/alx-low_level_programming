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

	for (i = 0 ; i < n ; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
