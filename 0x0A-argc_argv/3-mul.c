#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc : number to use
 * @argv : array of arg
 * Description : "result of multiply"
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
