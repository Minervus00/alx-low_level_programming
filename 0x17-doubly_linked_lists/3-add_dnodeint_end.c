#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head
 * @n: int
 * Return: dlistint_t *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *buff;

	buff = *head;
	while (buff)
	{
		if (buff->next == NULL)
			break;
		buff = buff->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = buff;
	new->next = NULL;
	if (buff != NULL)
		buff->next = new;
	return (new);
}
