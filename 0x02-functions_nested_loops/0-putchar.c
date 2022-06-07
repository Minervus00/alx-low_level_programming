#include "main.h"

/**
 * main - printer
 *
 * Return: 0 success
 */
int main(void)
{
	char var[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(var[i]);
	_putchar('\n');

	return (0);
}
