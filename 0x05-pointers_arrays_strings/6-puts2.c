#include "main.h"
#include <string.h>

/**
 * puts2 - thatttt
 * @str: varr
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i, length = strlen(str) - 1;

	if (length > 0)
	{
		for (i = 0; i <= length; i += 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}
