#include <ctype.h>

/**
 * _isupper - check if uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);

	else
		return (0);
}
