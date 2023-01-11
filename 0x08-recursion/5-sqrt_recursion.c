#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - entry point
 * @n : number to use
 * Description : "square root of number"
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	int s;

	if (n < 0)
	{
		return (-1);
	}
	s = sqrt(n);
	return  (s);
}
