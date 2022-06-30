#include <stdlib.c>
#include <string.h>

/**
 * _calloc - dddd
 * @nmemb: qq
 * @size: www
 *
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *qwj;

	if (nmemb == 0 || size == 0)
		return (NULL);
	qwj = malloc(nmemb * size);
	if (qwj == NULL)
		return (NULL);
	memset(qwj, 0, size * nmemb);
	return (qwj);
}
