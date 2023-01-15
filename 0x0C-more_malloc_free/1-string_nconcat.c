#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - entry point
 * @s1 : first char
 * @s2 : second char
 * Description : "concatinate two strings"
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int len1;
	unsigned int len2;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		continue;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		continue;
	}
	if (n > len2)
	{
		len2 = n;
	}
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		str[len1 + i] = s2[i];
	}
	str[len1 + n] = '\0';
	return (str);
}
