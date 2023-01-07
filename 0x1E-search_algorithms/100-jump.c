#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value using jump search
 * @array: a pointer to the first element of the ascending sorted array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
int jump_search(int *array, size_t size, int value)
{
	int a = 0, jmp = (int) sqrt(size), b = jmp;

	if (array == NULL)
		return (-1);

	if (array[a] == value)
		return (a);
	printf("Value checked array[%d] = [%d]\n", a, array[a]);

	/* Encircle the value between 'a' and min(b, n) - 1 */
	while (array[((b < (int) size) ? b : (int) (size - 1))] < value)
	{
		if (b >= (int) size)
			break;
		if (array[b] == value)
			return (b);
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		a = b;
		b += jmp;

		if (a >= (int) size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", a, b);

	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a += 1;
		if (a == ((b < (int) size) ? b + 1 : (int) size))
			return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", a, array[a]);
	if (array[a] == value)
		return (a);
	else
		return (-1);
}
