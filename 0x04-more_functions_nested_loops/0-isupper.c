#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Entry point
 * @c : number to check
 *Description : 'function to chech upper case'
 * Return: 1 if it is upper case. other wise 0. (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
