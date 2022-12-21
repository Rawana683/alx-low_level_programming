#include "main.h"
#include <string.h>
/**
 * _strncpy - entry point
 * @dest : char 1
 * @src : char 2
 * @n : number of bytes
 * Description: 'copy string'
 * Return: dest (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
