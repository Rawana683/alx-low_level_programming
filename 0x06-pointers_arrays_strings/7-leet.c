#include "main.h"
#include <stdio.h>
/**
 * leet - entry point
 * @c : char to use
 * Description : ' change char'
 * Return: 0.
 */
char *leet(char *c)
{
	int i;
	int k;

	char s[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		for (k = 0; k <= 9 ; k++)
		{
			if (s[k] == c[i])
			{
				c[i] = n[k];
			}
		}
	}
	return (c);
}
