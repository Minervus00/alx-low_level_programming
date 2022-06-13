#include "main.h"

/**
 * print_rev - print a str in reverse
 * @s: that string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length = _strlen(s);

	for (i = 0; i <= length; i++)
		_putchar(s[length - i]);
	_putchar('\n');
}
