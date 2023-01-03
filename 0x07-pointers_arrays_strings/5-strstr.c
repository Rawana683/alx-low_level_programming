#include "main.h"
#include <string.h>
/**
 *_strstr - entry point
 * @haystack : char to use
 * @needle : char to use
 * Description : "first occurence"
 * Return: out
 */
char *_strstr(char *haystack, char *needle)
{
	char *out;

	out = strstr(haystack, needle);
	return (out);
}
