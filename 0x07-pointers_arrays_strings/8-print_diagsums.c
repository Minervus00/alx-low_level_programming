#include <stdio.h>

/**
 * print_diagsums - thattt
 * @a: ff
 * @size: siii
 *
 * Return: nooooop
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * (size + 1)];
		s2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
