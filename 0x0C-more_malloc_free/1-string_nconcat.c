#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - oooq
 * @s1: ff
 * @s2: gg
 * @n: qq
 *
 * Return: qq
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, l1 = strlen(s1), l2 = strlen(s2);
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > l2)
		n = l2;

	str = malloc(l1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[l1 + i] = s2[i];
	str[l1 + n - 1] = '\0';
	return (str);
}
