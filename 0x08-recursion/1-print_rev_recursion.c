#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - entry point
 * @s : char to use
 * Description : "rev recursion"
 * Return : 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
