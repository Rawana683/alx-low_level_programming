#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - entry point
 * @c :  char
 * Description : 'to upper'
 * Return: char in upper.
 */
char *string_toupper(char *c)
{
	int m;
	int i;
	int l;

	i = 0;
	l = 0;

	for (m = 0 ; c[m] != '\0' ; m++)
	{
		i = m;
	}
	while (l <= i)
	{
		c[l] = toupper(c[l]);
		l++;
	}
	return (c);
}
