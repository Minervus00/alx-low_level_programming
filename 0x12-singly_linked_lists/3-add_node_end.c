#include <unistd.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - thaaaat
 * @head: list_t **
 * @str: const char *
 *
 * Return: list_t *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *head2;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		write(1, "Error\n", 6);
		exit (1);
	}

	new->str = ((str == NULL) ? "(nil)" : strdup(str));
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		head2 = *head;
		while (head2->next != NULL)
		{
			head2 = (head2->next);
		}
		head2->next = new;
	}
	return (new);
}
