#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator : separator between
 * @n : no of strings
 * description : "printall strings"
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n ; i++)
	{
		s = va_arg(ap, char *);
		printf("%s", s);
		if (i == (n - 1))
		{
			break;
		}
		printf("%c ", *separator);
	}
	printf("\n");
	va_end(ap);
}
