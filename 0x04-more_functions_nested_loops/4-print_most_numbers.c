#include "main.h"

/**
 * print_most_numbers - on one line digits excepted 2 & 4
 *
 * Return: 0 success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
