#include <stdio.h>

/**
 * interpolation_search - searches for a value using interpolation search
 * @array: a pointer to the first element of the ascending sorted array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = ((value - array[low]) * (high - low)) / (
			array[high] - array[low]);

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value > array[low]) && (
		value <= array[high]))
	{
		printf("Value checked array[%lld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
		pos = ((value - array[low]) * (high - low)) / (
			array[high] - array[low]);
	}

	if (value == array[low])
	{
		printf("Value checked array[%lld] = [%d]\n", low, array[low]);
		return (low);
	}
	else
	{
		printf("Value checked array[%lld] is out of range\n", pos);
		return (-1);
	}
}
