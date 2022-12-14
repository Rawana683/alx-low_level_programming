#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Entry point
 * @c : the number to be checked
 * Description : 'functon to recognize lowercase letters'
 * Return: int of 1 if lower . 0 otherwise. (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
