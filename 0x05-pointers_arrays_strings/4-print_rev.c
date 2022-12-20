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

	for (i = 0 ; s[i] != '\0'; i++)
	{
		len = strlen(s);
		for (o = 0 ; len >= o ; o--)
		{
			puts(s[len]);
		}
	}
}
