#include <stdlib.h>

/**
 * alloc_grid - creates 2-d array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **arr2d;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr2d = malloc(sizeof(int *) * height);
	if (!arr2d)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr2d[i] = malloc(sizeof(int) * width);
		if (arr2d[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr2d[j]);
			free(arr2d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr2d[i][j] = 0;

	}
	return (arr2d);
}
