#include "main.h"
#include <ctype.h>

/**
 * _isalpha - the taskerr
 * @c: the parameter checked
 *
 * Return: 1 if success, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
