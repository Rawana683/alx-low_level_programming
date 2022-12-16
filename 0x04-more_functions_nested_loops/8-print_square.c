#include "main.h"

/**
 * print_square - entry point
 * @size : square to print
 * Description : 'print square'
 * Return: 0. (Success)
 */
void print_square(int size)
{
	int i;
	int m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0 ; i < size ; i++)
	{
		for (m = 0 ; m < size ; m++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
