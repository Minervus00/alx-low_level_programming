#include "main.h"

/**
 * swap_int - swapper
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a, d = *b;

	*a = d;
	*b = c;
}
