#include <stdlib.h>

/**
 * create_array - iiookk
 * @size: kkk
 * @c: ssss
 *
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (!(size))
		return (NULL);
	arr = malloc(size);
	arr[0] = c;
	return (arr);
}
