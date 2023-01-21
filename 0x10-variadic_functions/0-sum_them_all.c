#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of var input
 * @n : first arg
 * description : "sum all var up"
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		int n;

		if (n == 0)
		{
			return (0);
		}

		n = va_arg(ap, unsigned int);
		sum += n;
	}
	va_end(ap);
	return (sum);
}
