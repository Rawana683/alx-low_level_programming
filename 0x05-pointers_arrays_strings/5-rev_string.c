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

	len = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		len = i;
	}
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
}
