#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - entry point
 * @s : char to use
 * Description: ' reverse string'
 * Return: 0. (Success)
 */
void rev_string(char *s)
{
	int len;
	int i;

	len = strlen(s) + 1;
	i = 0;
	while (len > i)
	{
		_putchar(s[len]);
		i++;
	}
}
