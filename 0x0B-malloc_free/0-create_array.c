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
	unsigned int i;
	char *arr;

	if (!(size))
		return (NULL);

	arr = malloc(size);
	if (arr == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
