#include "main.h"
#include <string.h>
/**
 *_strpbrk - entry point
 * @s : char to use
 * @accept : char to use
 * Description : "first occurrence "
 * Return: out
 */
char *_strpbrk(char *s, char *accept)
{
	char *out;

	out = strpbrk(s, accept);
	return (out);
}
