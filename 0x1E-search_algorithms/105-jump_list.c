#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * get_value - retrieve the node at a given index in the list
 * @list: a pointer to the head of the singly linked list
 * @idx: the index to search for
 * Return: the node owning the searched index
 */
listint_t *get_value(listint_t *list, size_t idx)
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

	/* Encircle the value between 'a' and min(b, n) - 1 */
	while (get_value(
		list, ((b < (int) size) ? b : (int) (size - 1)))->n < value)
	{
		if (b >= (int) size)
			break;
		tmp = get_value(list, b);
		if (tmp->n == value)
			return (tmp);
		printf("Value checked array[%d] = [%d]\n", b, tmp->n);
		a = b;
		b += jmp;

		if (a >= (int) size)
			return (NULL);
	}
	printf("Value found between indexes [%d] and [%d]\n", a, b);

	tmp = get_value(list, a);
	while (tmp->n < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, tmp->n);
		a += 1;
		if (a == ((b < (int) size) ? b + 1 : (int) size))
			return (NULL);
		tmp = get_value(list, a);
	}

	printf("Value checked array[%d] = [%d]\n", a, tmp->n);
	if (tmp->n == value)
		return (tmp);
	else
		return (NULL);
}
