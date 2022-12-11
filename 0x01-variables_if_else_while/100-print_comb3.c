#include <stdio.h>
/**
*main - Entry point
*Description: 'this program is to print compined numbers'
*Return : Always(0) (Success)
*/
int main(void)
{
	int n;
	int i;

	for (n = 48 ; n < 58 ; n++)
{
	for (i = 48 ; i < 58 ; i++)
{
	if (i == n)
{
	continue;
}

	putchar(n);
	putchar(i);
if (n != 57 && i != 57)
{
	break;
}
else
{
	putchar(',');
	putchar(' ');
}
}
}
putchar('\n');
return (0);
}

