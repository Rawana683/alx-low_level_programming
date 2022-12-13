#include "main.h"
/**
 * print_alphabet - Entry point
 * Description 'this program is to print alphabet'
 * Return: Always 0 (Success)
*/
int print_alphabet(void)
{
	int n;

	for (n = 48 ; n < 58 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
