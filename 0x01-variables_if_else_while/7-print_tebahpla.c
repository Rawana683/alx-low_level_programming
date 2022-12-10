#include <stdio.h>
/**
*main - Entry point
*Description; 'this program is to print alphabet'
*Return: Always (0) (Success)
*/
int main(void)
{
char c;
for (c = 'z' ; c >= 'a' ; c--)
{ putchar(c); }
putchar('\n');
return (0);
}
