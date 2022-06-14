#include "main.h"
#include <stdio.h>

/**
 * print_array - hkjvcqqq
 * @a: int *
 * @n: int
 *
 * Return: nooooop
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= (n - 1); i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
				printf(", ");
		}
	}
	printf("\n");
}
