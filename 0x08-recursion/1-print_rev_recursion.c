#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - thaaaat
 * @s: noo
 *
 * Return: nooop
 */
void _print_rev_recursion(char *s)
{
	int i, n = strlen(s) - 1;

	for (i = n; i >= 0; i--)
		_putchar(s[i]);
}
