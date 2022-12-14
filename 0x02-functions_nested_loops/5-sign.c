#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_sign - Entry point
 * @n : number to check
 * Description: ' print the sign of a number'
 * Return: 1 if the number is positive. 0 if not. -1(Success)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
	_putchar('\n');
}
