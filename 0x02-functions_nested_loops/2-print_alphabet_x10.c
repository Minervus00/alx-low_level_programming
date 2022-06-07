#include "main.h"

/**
 * print_alphabet_x10 - printer
 *
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	char var[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j = 1;

	while (j <= 10)
	{
		for (i = 0; i <= 25; i++)
			_putchar(var[i]);
		_putchar('\n');
		j++;
	}
}
