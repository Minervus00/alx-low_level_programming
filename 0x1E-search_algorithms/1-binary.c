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
 * binary_search - searches for a value using binary search
 * @array: a pointer to the first element of the ascending sorted array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = (int) (size - 1), m = 0;

	if (array == NULL)
		return (-1);
	do
	{
		print_array(array, L, R);
		m = (int) ((L + R) / 2);
		if (value == array[m])
			return (m);
		else if (value > array[m])
			L = m + 1;
		else
			R = m - 1;
	} while (L <= R);

	return (-1);
}
