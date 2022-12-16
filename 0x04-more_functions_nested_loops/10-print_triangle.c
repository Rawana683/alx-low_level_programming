#include "main.h"
/**
 * print_triangle - entry point
 * @size : nu,ber
 * Description
 * Return: 0. (Success)
 */
void print_triangle(int size)
{
	int i;
	int m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1 ; i <= size ; i++)
	{
		for (m = i; m < size ; m++)
		{
			_putchar(' ');
		}
		for (m = 1 ; m <= i ; m++)
		{
			_putchar('#');
		}

		_putchar ('\n');
	}
}

