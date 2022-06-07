#include "main.h"
#include <ctype.h>

/**
 * _islower - printer
 * @c: the parameter checked
 *
 * Return: 1 if success, 0 otherwise
 */
int _islower(int c)
{
	if (isupper(c))
		return (0);
	else
		return (1);
}
