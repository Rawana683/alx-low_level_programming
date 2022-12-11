#include <stdio.h>
/**
*main - Entry point
*Description: 'this program is to print compined numbers'
*Return : Always (0) (Success)
*/
int main(void)
{
	int n;
	int i;
	for (n = 48, i = 57 ; n < 58 && i > 48 ; n++, i--)
{
	putchar(n);
	putchar(i);
if (n != 57)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}

