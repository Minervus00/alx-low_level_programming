#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _atoi - thattt
 * @s: hooo
 *
 * Return: cvted value
 */
int _atoi(char *s)
{
	int i, g = 1, length = strlen(s) - 1;
	char test[150] = "";

	for (i = 0; i <=  length; i++)
	{
		if (isdigit(s[i]))
			strncat(test, &s[i], 1);

		else if (strchr("-", s[i]) != NULL)
			g *= -1;
	}
	i = g * atoi(test);
	return (i);
}
