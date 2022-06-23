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
	int n = strlen(s) - 1;
	char c[100];

	if (n != 0)
	{
		_putchar(s[n]);
		memcpy(c, s, n);
		_print_rev_recursion(c);
	}
}
