#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Entry point
 * @c : the number to check
 * Description : ' check whether the entry is alphabet'
 * Return: 1 if it is alphabet. 0 otherwise (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
