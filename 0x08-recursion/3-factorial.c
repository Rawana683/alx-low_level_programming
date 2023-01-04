#include "main.h"
#include <stdio.h>
/**
 * factorial - entry point
 * @n : number to use
 * Description : "factorial of a number"
 * Return: f.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
