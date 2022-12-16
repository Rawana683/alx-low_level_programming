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

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
