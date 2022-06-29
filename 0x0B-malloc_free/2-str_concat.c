#include <string.h>
#include <stdlib.h>

/**
 * str_concat - oooo
 * @s1: gg
 * @s2: ll
 *
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	conc = strdup(strcat(s1, s2));

	if (conc == NULL)
		return (NULL);
	return (conc);
}
