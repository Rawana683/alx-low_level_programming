#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc : number of arg
 * @argv : array of arg
 * Description : "addition of numbers"
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;
	for (i = 0 ; i < argc ; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		else if (argc == 1)
		{
			printf("0\n");
		}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
