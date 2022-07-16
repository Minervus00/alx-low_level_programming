#include <unistd.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - thaaaat
 * @head: list_t **
 * @str: const char *
 *
 * Return: list_t *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		write(1, "Error\n", 6);
		exit(1);
	}

	new->str = ((str == NULL) ? "(nil)" : strdup(str));
	new->len = strlen(str);
	new->next = ((head == NULL) ? NULL : *head);

	*head = new;
	return (new);
}
