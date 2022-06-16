#include "main.h"

/**
 * reverse_array - thaaaaat
 * @a: array
 * @n: size
 *
 * Return: noooop
 */
void reverse_array(int *a, int n)
{
	int i, j, chk = n / 2;

	for (i = 0; i < chk; i++)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
