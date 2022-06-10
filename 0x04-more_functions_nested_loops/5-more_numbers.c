#include "main.h"

/**
 * most_numbers - digits from 0 to 14 10x
 *
 * Return: nooop
 */
void most_numbers(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
			_putchar('0' + j);
		_putchar('\n');
	}
}
