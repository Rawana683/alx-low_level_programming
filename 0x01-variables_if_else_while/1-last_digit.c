#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
*main - Entry point
*Description: ‘this program is to get the last digit ‘
* Return: Always 0 (Success)
*/

int main(void)

{
int n, l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
{ printf("Last digit of %d is %d and is greater than 5", n, l); }
else if (l < 6)
{ printf("Last digit of %d is %d and is less than 6 and not 0", n, l); }
else
{ printf("Last digit of %d is 0 and is 0", n); }
return (0);
}
