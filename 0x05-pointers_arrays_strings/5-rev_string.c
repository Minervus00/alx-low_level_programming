#include "main.h"
#include <string.h>

/**
 * rev_string - that's that
 * @s: the string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char str_c[100];
	int length = strlen(s) - 1, i;

	strcpy(str_c, s);
	for (i = 0; i <= length; i++)
		s[i] = str_c[length - i];
}
