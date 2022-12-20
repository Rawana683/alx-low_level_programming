#include "main.h"
#include <stdio.h>

/**
 * puts_half - entry point
 * @str : char to use
 * Description: ' print only half'
 * Return: 0. (Success)
 */
void puts_half(char *str)
{
	int i;
	int len;
	int half;

	for (i = 0; str[i] != '\0' ; i++)
	{
		len = i;
	}
	if ((len % 2) == 0)
	{
		half = (len / 2) + 1;
		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
	}
	else if

	{
		half = ((len - 1) / 2) +1;
		while (str[half]  != '\0')
		{
			_putchar(str[half]);
			half++;
		}
	}

	else
	{
		_putchar('\n');
	}

	_putchar('\n');
}
