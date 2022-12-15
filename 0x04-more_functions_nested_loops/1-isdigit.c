#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *_isdigit - entry point
 * @C : number to check
 * Description: 'check digits'
 * Return: 1 if it is a digit and 0 otherwise. (Success)
 */
int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
