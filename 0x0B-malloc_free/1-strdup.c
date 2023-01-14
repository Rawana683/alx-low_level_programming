#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str : char to use
 * Description : "return pointer to new mem"
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *strr;
	int i;
	int len;

	len = 0;
	strr = (malloc(sizeof(char) * (len + 1)));
	if (str == 0 || strr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		strr[i] = str[i];
		len++;
	}
	strr[len] = '\0';
	return (strr);
	free(strr);
}
