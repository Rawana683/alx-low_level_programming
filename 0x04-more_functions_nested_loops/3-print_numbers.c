#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers - entry point
 * Description : 'print numbers'
 * Return: 0. (Success)
 */
void print_numbers(void)
{
	char c;

	for (c = 48 ; c < 58 ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
