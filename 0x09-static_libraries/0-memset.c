#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_memset - entry point
 * @s : char to use
 * @b : char also
 * @n : number to use
 * Description: "function to return memory area"
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
