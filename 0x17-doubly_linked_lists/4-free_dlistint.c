#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buff = head;

	while (buff)
	{
		free(buff);
		buff = buff->next;
	}
}
