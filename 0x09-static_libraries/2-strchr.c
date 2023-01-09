#include "main.h"
#include <string.h>
/**
 *_strchr - entry point
 *@s : char to use
 *@c : char to use
 *Description : "get a char from a string"
 * Return: strchr
 */
char *_strchr(char *s, char c)
{
	char *out;

	out = strchr(s, c);
	return (out);
}
