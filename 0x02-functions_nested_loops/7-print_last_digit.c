#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 * @n : the number to check
 * Description: ' function to print last digit'
 * Return: last digit of the function
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l = (-1 * l);
	_putchar(l + '0');
	return (l);
}
