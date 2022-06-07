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
	if (islower(c))
		return (1);
	else
		return (0);
}
