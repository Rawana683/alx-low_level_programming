#include "main.h"
#include <stdio.h>
/**
 * rev_string - entry point
 * @s : char to use
 * Description: ' reverse string'
 * Return: 0. (Success)
 */
void rev_string(char *s)
{
	int len;
	int o;
	int i;

	len = 0;
	o = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		len = i;
	}
	if (len == 1)
	{
		_putchar(' ');
	}
	for (; len >= o; len--)
	{
		_putchar(s[len]);
		if (len == i)
		{
			break;
		}
	}
}
