#include "main.h"
#include <string.h>
/**
 * _strcmp - entry point
 * @s1 : char 1
 * @s2 : char 2
 * Description: 'compare two strings'
 * Return: an int if they are similar (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = strcmp(s1, s2);
	return (i);
}
