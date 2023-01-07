#include <stddef.h>
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
 * recursive_binary - searches for a value using binary search
 * @array: a pointer to the first element of the ascending sorted array
 * @L: index of left border of the subarray
 * @R: index of the right border in the subarray
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
int recursive_binary(int *array, int L, int R, int value)
{
	int m = 0;

	if (L <= R)
	{
		print_array(array, L, R);
		m = (int) ((L + R) / 2);
		if (value == array[m])
		{
			if (array[m - 1] == value)
				return (recursive_binary(array, L, m, value));
			return (m);
		}
		else
		{
			if (value > array[m])
				L = m + 1;
			else
				R = m - 1;
			return (recursive_binary(array, L, R, value));
		}
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value using binary search
 * @array: a pointer to the first element of the ascending sorted array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
