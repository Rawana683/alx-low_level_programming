#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * Description 'this function is to print alphabet'
 * Return: Always 0 (Success)
*/
void  print_alphabet(void)
{
	int i;
	for (i = 48 ; i < 58 ; i++)
		_putchar(i);
	_putchar('\n');
}
