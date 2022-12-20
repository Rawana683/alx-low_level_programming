#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - entry point
 * @s : char to use
 * Description: ' reverse string'
 * Return: 0. (Success)
 */
void rev_string(char *s)
{
	int len;
	int i;
	char o;

	i = 0;
	len = 0;

	len = strlen[s] - 1;
		while (i < len)
		{
			o = s[i];
			s[i] = s[len];
			s[len] = o;
			i++;
			len--;
		}
}
