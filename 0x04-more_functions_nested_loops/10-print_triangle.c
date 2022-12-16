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

	for ( i = 0 ; i < size ; i++)
	{
		_putchar(' ');
		for (m = 0; m < i ; m++)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
}

