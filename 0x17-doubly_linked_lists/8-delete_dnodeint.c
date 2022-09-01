#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts the node at a given position
 * @head: head
 * @index: idx
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *buff = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (buff)
	{
		if (i == index)
			break;
		i++;
		buff = buff->next;
	}
	if (buff == NULL)
		return (-1);
	prev = buff->prev;
	if (prev != NULL)
		prev->next = buff->next;
	else
		*head = buff->next;
	if (buff->next != NULL)
		(buff->next)->prev = prev;

	free(buff);
	return (1);
}
