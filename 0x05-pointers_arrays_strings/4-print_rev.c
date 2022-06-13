#include "main.h"
#include <string.h>

/**
 * print_rev - print a str in reverse
 * @s: that string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length = strlen(s);

	if (length > 0)
	{
		for (i = 1; i <= length; i++)
			_putchar(s[length - i]);
	}
	_putchar('\n');
}
