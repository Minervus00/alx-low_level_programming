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
	size_t pos = 0;

	if (array == NULL || size == 0)
		return (-1);

	pos = ((value - array[low]) * (high - low)) / (
			array[high] - array[low]);
	while ((array[high] != array[low]) && (value > array[low]) && (
		value <= array[high]))
	{
		printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);
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
		printf("Value checked array[%d] = [%d]\n", (int) low, array[low]);
		return (low);
	}
	else
	{
		printf("Value checked array[%d] is out of range\n", (int) pos);
		return (-1);
	}
}
