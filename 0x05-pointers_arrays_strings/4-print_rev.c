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

	i = 0;
	len = strlen(s);

	while (s[i] != '\0')
	{
		_putchar(s[len]);
		i++;
		len--;
		if ( len = i )
		{
			break;
		}
	}
}
