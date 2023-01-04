#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *_pow_recursion - entry point
 * @y : number to use
 * @x : number to use
 *Description : "x to power of y"
 *Return: x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
