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
	int n, i;

	for (n = 0; n <= 10; n++)
	{
	for (i = 0; i <= 14; i++)
	{
	if (i >= 10)
	{
	_putchar(i / 10 + '0');
	}
	else
	{
	_putchar(i % 10 + '0');
	}
	}
	_putchar('\n');
}
