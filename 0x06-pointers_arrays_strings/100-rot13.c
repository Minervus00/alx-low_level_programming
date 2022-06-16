#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * rot13 - Ceasar Cypher
 * @str: str
 *
 * Return: char *
 */
char *rot13(char *str)
{
	int i, n = strlen(str), j;

	for (i = 0; i < n; i++)
	{
		if (islower(str[i]) && ((int) str[i]) <= 109)
			str[i] = (char) (((int) str[i]) + 13);

		else if (islower(str[i]) && ((int) str[i]) > 109)
			str[i] = (char) (((int) str[i]) - 13);

		else if (isupper(str[i]) && ((int) str[i]) <= 77)
			str[i] = (char) (((int) str[i]) + 13);

		else if (isupper(str[i]) && ((int) str[i]) > 77)
			str[i] = (char) (((int) str[i]) - 13);
	}

	return (str);
}
