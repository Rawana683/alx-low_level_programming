#include "main.h"
#include <stdio.h>

/**
 * puts2 - entry point
 * @str : the char
 * Description: ' every other character'
 * Return: 0. (Success)
 */
void puts2(char *str)
{
	int i;

	i = 0;
	_putchar(s[i]);
	for (i = 0; s[i] != '\0' ; i++)
	{
		i = i + 2;
		_putchar(s[i]);
	}
}
