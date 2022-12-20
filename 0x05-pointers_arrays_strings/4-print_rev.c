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
	char a[15];
	int i;

	s = a;
	for (i = 15 ; i >= 0; i--)
	{
		putc(a[i]);
	}
}
