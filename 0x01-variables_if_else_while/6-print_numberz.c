#include <stdio.h>
/**
*main - Entry point
*Description: 'this program is to print numbers'
*Return: Always 0 (Success)
*/
int main(void)
{ int n;
for (n = 0 ; n <= 9 ; n++)
{
putchar((n % 9) + '0');
}
putchar('\n');
return (0);
}
