#include "main.h"

/**
 * more_numbers - digits from 0 to 14 10x
 *
 * Return: nooop
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar('1');

			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
