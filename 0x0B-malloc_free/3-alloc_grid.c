#include <stdlib.h>

/**
 * alloc_grid - mmll6
 * @width: hh
 * @height: fff
 *
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int **res, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	res = (int **) malloc(height * sizeof(int *));
	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		res[i] = (int *) malloc(width * sizeof(int));
		if (res[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(res[j]);
			free(res);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			res[i][j] = 0;
	}
	return (res);
}
