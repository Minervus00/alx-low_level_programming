#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * get_node - retrieve the node at a given index in the list
 * @list: a pointer to the head of the singly linked list
 * @idx: the index to search for
 * Return: the node owning the searched index
 */
listint_t *get_node(listint_t *list, size_t idx)
{
	listint_t *buff = list;

	while (buff)
	{
		if (buff->index == idx)
			return (buff);
		buff = buff->next;
	}
	return (NULL);
}

/**
 * jump_list - searches for a value using jump search
 * @list: a pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: the value to search for
 * Return: the index where 'value' is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int a = 0, jmp = (int) sqrt(size), b = jmp;
	listint_t *tmp = NULL;

	if (list == NULL)
		return (NULL);

	b = ((b < (int) size) ? b : (int) (size - 1));
	tmp = get_node(list, b);
	while (tmp->n < value)
	{
		if (b == (int) (size - 1))
			break;
		if (tmp->n == value)
			return (tmp);
		printf("Value checked array[%d] = [%d]\n", b, tmp->n);
		a = b;
		b += jmp;
		if (a >= (int) size)
			return (NULL);
		b = ((b < (int) size) ? b : (int) (size - 1));
		tmp = get_node(list, b);
	}
	printf("Value checked array[%d] = [%d]\n", b, tmp->n);
	printf("Value found between indexes [%d] and [%d]\n", a, b);

	tmp = get_node(list, a);
	while (tmp->n < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, tmp->n);
		a += 1;
		if (a == (b + 1))
			return (NULL);
		tmp = get_node(list, a);
	}

	printf("Value checked array[%d] = [%d]\n", a, tmp->n);
	if (tmp->n == value)
		return (tmp);
	else
		return (NULL);
}
