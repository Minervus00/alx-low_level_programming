#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - searchs for a value using linear search
 * @array: a pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; (size_t) i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
