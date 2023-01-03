#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_memcpy - entry point
 * @dest : char to use
 * @src : char to use
 * @n : number to use
 *Description : " memcpy n bytes "
 * Return: a ponter to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
