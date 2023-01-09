#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strspn - entry point
 *@s : char to use
 *@accept : char to use
 * Description : "get accept from s"
 * Return: out
 */
unsigned int _strspn(char *s, char *accept)
{
	int out;

	out = strspn(s, accept);
	return (out);
}
