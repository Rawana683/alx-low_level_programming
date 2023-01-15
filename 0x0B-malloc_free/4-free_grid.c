#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - entry point
 * @grid : array to free
 * @height : int to free
 * Description : "free my 2 dim array"
 * Return: 0.
 */
void free_grid(int **grid, int height)
{
	int i;
	 for (i = 0; i < height; i++)
	 {
		 free(grid[i]);
	 }
	free(grid);
}
