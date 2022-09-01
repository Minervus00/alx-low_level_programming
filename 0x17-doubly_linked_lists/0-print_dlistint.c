#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: list head
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint *buff;
	size_t n = 0;

	if (h == NULL || *h == NULL)
		return (NULL);
	buff = h;
	while(buff)
	{
		printf("%d\n", buff->n);
		buff = buff->next;
	}
}
