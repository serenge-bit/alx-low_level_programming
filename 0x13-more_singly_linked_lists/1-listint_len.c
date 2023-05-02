#include "lists.h"

/**
 * listint_len - number of elements returned
 * @h: pointer
 * Return: number of elemnts
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		num++;

		h = h->next;
	}
	return (num);
}
