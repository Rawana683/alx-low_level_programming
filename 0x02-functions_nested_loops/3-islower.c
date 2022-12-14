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
	char i;
	char e;

	i = '0';
       	e = '1';	

	if (islower(c))
	{
	_putchar(e);
	}
	else
	{
	_putchar(i);
	}
	return (0);
}
