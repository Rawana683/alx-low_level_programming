#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * description ; 'fizz buzz printing'
 * Return: 0. (Success)
 */
int main(void)
{
	int i;
	int m;
	for (i = 1 ; i <= 100 ; i++)
	{
		printf("%d ", i);
		if ((i / 3) == 1)
		{
			printf("Fizz ");
		}
		else if ((i / 5) == 1)
		{
			printf("Buzz ");
		}
		else if (((i / 3) == 1) && ((i / 5) == 1))
		{
			printf("FizzBuzz ");
		}
	}
}
