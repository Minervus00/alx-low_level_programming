#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - thattttttt
 * @str: str
 *
 * Return: char *
 */
char *string_toupper(char *str)
{
	int i, n = strlen(str) - 1;

	for (i = 0; i <= n; i++)
		str[i] = toupper(str[i]);

	return (str);
}
