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
	int i, g, h;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	g = strlen(s1);
	h = strlen(s2);
	conc = malloc(g + h);
	if (conc == NULL || h + g == 0)
		return (NULL);
	for (i = 0; i < g; i++)
		conc[i] = s1[i];

	for (i = 0; i < h; i++)
		conc[g + i] = s2[i];
	return (conc);
}
