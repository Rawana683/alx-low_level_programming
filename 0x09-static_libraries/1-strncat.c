#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - entry point
 * @dest : char
 * @src : char
 * @n : number of bytes
 * Description: ' attach two strings
 * Return: dest after attachment
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
