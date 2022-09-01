#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: list head
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *buff;
	size_t n = 0;

	if (h == NULL)
		return (n);
	printf("%d\n", h->n);
	n++;
	buff = h->next;
	while (buff)
	{
		n++;
		printf("%d\n", buff->n);
		buff = buff->next;
	}
	return (n);
}
