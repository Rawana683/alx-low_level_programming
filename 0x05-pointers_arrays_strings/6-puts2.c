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

	for (i = 0; str[i] != '\0' ; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
