#include <stdlib.h>

/**
 * array_range - dd
 * @min: ss
 * @max: ww
 *
 * Return: int *
 */
int *array_range(int min, int max)
{
	int i, *arr, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	arr = malloc(n * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		arr[i] = min + i;
	return (arr);
}
