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
	int i;
	int e;

	i = 48;
       	e = 49;	

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
