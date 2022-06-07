#include "main.h"

/**
 * _islower - printer
 * @c: the parameter checked
 *
 * Return: 1 if success, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
