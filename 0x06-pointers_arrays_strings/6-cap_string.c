#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - thaaaaaat
 * @str: str
 *
 * Return: char *
 */
char *cap_string(char *str)
{
	int i, n = strlen(str);

	if (isalpha(str[0]))
		str[0] = toupper(str[0]);

	for (i = 1; i < n - 1; i++)
	{
		if (strchr(",;.!?\"(){}", str[i]) != NULL || isspace(str[i]))
		{
			if (isalpha(str[i + 1]))
				str[i + 1] = toupper(str[i + 1]);
		}
	}

	return (str);
}
