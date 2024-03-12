#include "main.h"
#include <stdlib.h>
/**
 * free_grid - the name of function
 * @grid: variable one
 * @height: the height
 * Return:
**/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
