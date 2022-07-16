#include <stdlib.h>
#include <unistd.h>
#include "lists.h"

/**
 * list_len - ooiiix
 * @h: const lsi_t
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	list_t *head;

	head = malloc(sizeof(list_t));
	if (head == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}

	head->next = h->next;
	do {
		if (n > 0)
		head->next = (head->next)->next;
		n++;
	} while (head->next != NULL);

	free(head);
	return (n);
}
