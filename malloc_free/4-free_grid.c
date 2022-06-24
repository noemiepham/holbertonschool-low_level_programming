#include "main.h"
#include <stdlib.h>
/**
* **free_grid - array matrix;
* @grid : grid
* @height: column
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for ( ; height >= 0; height--)
		free(grid[height]);
		free(grid);
	};
}
