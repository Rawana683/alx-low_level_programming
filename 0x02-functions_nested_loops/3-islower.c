#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Entry point
 * Description : 'functon to recognize lowercase letters'
 * Return : 0. (Success)
 */
int _islower(int c)
{

	if (islower(c))
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}
	return (0);
}
