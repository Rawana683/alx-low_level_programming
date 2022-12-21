#include "main.h"
#include <stdio.h>
/**
 * _strcat - entry point
 * @dest : the char to use
 * @src : the char to use
 * Description: 'attach two strings'
 * Return: dest after attaching
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
