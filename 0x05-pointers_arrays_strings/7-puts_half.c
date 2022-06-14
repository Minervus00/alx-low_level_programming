#include "main.h"
#include <string.h>

/**
 * puts_half - dfjybfddbd
 * @str: thaaaat
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, n, length = strlen(str);

	if (length > 0)
	{
		if (length % 2 != 0)
			n = ((length - 1) / 2) + 1;
		else
			n = length / 2;

		for (i = n; i <= length - 1; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
