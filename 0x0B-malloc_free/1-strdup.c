#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - kkkkk
 * @str: hgsqq
 *
 * Return: char *
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
		return (NULL);
	return (dup);
}
