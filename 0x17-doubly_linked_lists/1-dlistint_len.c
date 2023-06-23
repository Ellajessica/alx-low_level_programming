#include "lists.h"

/**
 * dlistint_len - no of element in the list
 * @h:head pointer
 * Return: no of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
