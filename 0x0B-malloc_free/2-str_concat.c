#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1 : char to use
 * @s2 : char to use
 * Description : "concatenate two strings"
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int len1;
	int len2;
	int m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0' ; len1++)
	{
		continue;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		continue;
	}

	s3 = malloc(sizeof(char) * ((len1 + len2) + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	m = 0;
	while (i < (len1 + len2))
	{
		s3[i] = s2[m];
		i++;
		m++;
	}
	s3[i] = '\0';
	return (s3);
}
