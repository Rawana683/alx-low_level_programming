#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - entry point
 * @name : char to use
 * @f : function pointer
 * Description : "print a name"
 * Return: 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
