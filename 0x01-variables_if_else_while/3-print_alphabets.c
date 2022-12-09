#include <stdio.h>
/**
*main - Entry point
*Description: ‘this program is to print the alphabet‘
* Return: Always 0 (Success)
*/
int main(void)
{ char alpha, capital;
for (alpha = 'a'; alpha <= 'z' ; alpha++)
{ putchar(alpha); }
for (capital = 'A'; capital <= 'Z' ; capital++)
{ putchar(capital); }
putchar('\n');
return (0);
}
