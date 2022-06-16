#include "main.h"
#include <string.h>

/**
 * leet - thaaaat
 * @str: str
 *
 * Return: char *
 */
char *leet(char *str)
{
	int i, n = strlen(str);

	for (i = 0; i < n; i++)
	{
		if (strchr("aA", str[i]) != NULL)
			str[i] = '4';

		else if (strchr("eE", str[i]) != NULL)
			str[i] = '3';

		else if (strchr("oO", str[i]) != NULL)
			str[i] = '0';

		else if (strchr("tT", str[i]) != NULL)
			str[i] = '7';

		else if (strchr("lL", str[i]) != NULL)
			str[i] = '1';
	}

	return (str);
}
