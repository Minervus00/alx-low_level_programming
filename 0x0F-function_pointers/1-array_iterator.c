#include <stddef.h>

/**
 * array_iterator - ojjjxx
 * @array: kk
 * @size: ccc
 * @action: jjhh
 *
 * Return: ggg
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
