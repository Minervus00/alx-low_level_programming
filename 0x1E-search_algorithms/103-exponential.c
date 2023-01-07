#include <stdio.h>

/**
 * print_array - prints a part of an array
 * @array: the entire array
 * @idx: the index from which begin the printing
 * @end: the index of the last element to print
 */
void print_array(int *array, int idx, int end)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = idx; i <= end; i++)
	{
		if (i != idx)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value using binary search
 * @array: a pointer to the first element of the ascending sorted array
 * @L: index of left border of the subarray
 * @R: index of the right border in the subarray
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
int binary_search(int *array, int L, int R, int value)
{
	int m = 0;

	do {
		print_array(array, L, R);
		m = (L + R) / 2;
		if (value == array[m])
			return (m);
		else if (value > array[m])
			L = m + 1;
		else
			R = m - 1;
	} while (L <= R);

	return (-1);
}

/**
 * exponential_search - searches for a value using exponential search
 * @array: a pointer to the first element of the ascending sorted array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 1, low = 0;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (idx < size && array[idx] <= value)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int) idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		low = idx;
		idx *= 2;
	}

	if (idx >= size)
		idx = size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int) low, (int) idx);
	return (binary_search(array, low, idx, value));
}
