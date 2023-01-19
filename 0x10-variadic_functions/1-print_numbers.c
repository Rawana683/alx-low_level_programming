#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all num
 * @separator : string between
 * @n : number of int passed
 * description : "print all numbers"
 * Return: numbers or 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	unsigned int s;


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, const unsigned int);

		printf("%d", s);
		if (i == (n - 1))
		{
			break;
		}
		printf("%c ", *separator);
		if (separator == NULL)
		{
			printf("%d", s);
		}
	}
	printf("\n");
	va_end(ap);
}
