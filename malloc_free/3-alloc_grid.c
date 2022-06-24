#include "main.h"
#include <stdlib.h>
/**
* **alloc_grid - array matrix;
* @width : row
* @height: column
* Return: Null if width height is 0;
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int)); /* deuxiem row */
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
	arr[i][j] = 0;
	return (arr);
}
