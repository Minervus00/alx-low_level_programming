#include "main.h"

/**
 * print_alphabet - printer
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	char var[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 25; i++)
		_putchar(var[i]);
	_putchar('\n');
}
