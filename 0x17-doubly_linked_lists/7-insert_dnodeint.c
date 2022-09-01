#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head
 * @idx: index
 * @n: data n of new node
 * Return: dlistint_t *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *buff = NULL, *new;
	unsigned int id = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp)
	{
		if (id == idx)
			break;
		id++;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		/*new node must be inserted at the end because idx is the end*/
		if (id == idx)
			return (add_dnodeint_end(h, n));
		/*idx out of the range (> end)*/
		return (NULL);
	}
	/*We are somewhere in the list; temp is the node with the index idx*/
	buff = temp->prev;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = buff;
	buff->next = new;
	temp->prev = new;
	new->next = temp;
	return (new);
}
