#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - thaaaat
 * @h: fsqq
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t *head;

	head = malloc(sizeof(list_t));
	if (head == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	head->str = h->str;
	head->len = h->len;
	head->next = h->next;
	do {
		if (n > 0)
		{
			head->str = (head->next)->str;
			head->len = (head->next)->len;
			head->next = (head->next)->next;
		}

		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		n++;
	} while (head->next != NULL);

	free(head);
	return (n);
}
