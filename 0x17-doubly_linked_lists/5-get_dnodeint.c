#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - to get a a node at a given index
 * @head:head pointer
 * @index:index
 * Return: the head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}
	return (head);
}
