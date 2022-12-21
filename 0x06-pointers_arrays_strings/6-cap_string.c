#include "main.h"
#include <ctype.h>
/**
 * cap_string - entry
 * @c : char to use
 * Description: 'capetalize words'
 * Return: the char afte cap.
 */
char *cap_string(char *c)
{
	int i;
	int m;
	int l;

	m = 0;
	l = 0;
	for (i = 0; c[i] != '\0' ; i++)
	{
		m = i;
	}
	while (l <= m)
	{
		if (c[l] == ' ' || c[l] == ',' || c[l] == ';'
			|| c[l] == '!' || c[l] == '?' || c[l] == '.'
			|| c[l] == '"' || c[l] == '(' || c[l] == ')'
		       || c[l] == '{' || c[l] == '}' || c[l] == '\t' || c[l] == '\n')
		{
			c[l + 1] = toupper(c[l + 1]);
		}
		l++;
	}
	return (c);
}
