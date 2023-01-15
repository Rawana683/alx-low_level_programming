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
	char *s4;
	char *s5;
	int len3;

	len1 = 0;
	len2 = 0;
	len3 = len1 + len2;
	s3 = malloc(sizeof(char) * (len1 + 1));
	s4 = malloc(sizeof(char) * (len2 + 1));
	s5 = malloc(sizeof(char) * (len3 + 1));
	for (i = 0; s1[i] ; i++)
	{
		/*if (s1[i] == '\0')
		*{
		*	s1[i] = "";
		*/
		s3[i] = s1[i];
		len1++;
	}
	for (m = 0; s2[m]; m++)
	{
		s4[m] = s2[m];
		len2++;
	}
	s5[len3] = '\0';
	return (s5);
}
