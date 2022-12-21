#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_rev - entry point
 * @s : char to use
 * Description: 'print a string in reverse'
 * Return: 0. (Success)
 */
void print_rev(char *s)
{
	int i;
	int len;
	int o;

	len = 0;
	o = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		len = i - 1;
	}
	if (s[i] == ' ')
	{
		_putchar('\n');
	}
		for (; len >= o ; len--)
		{
			_putchar(s[len]);
		}
	_putchar('\n');
}
