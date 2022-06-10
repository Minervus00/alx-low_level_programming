#include <ctype.h>

/**
 * _isdigit - check for a digit 0 to 9
 *
 * @c: character to be checked
 *
 * Return: 1 if upper 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);

	else
		return (0);
}
