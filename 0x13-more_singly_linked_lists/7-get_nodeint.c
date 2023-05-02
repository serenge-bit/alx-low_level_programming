#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the head
 * @index: index node, starting at 0
 * Return: NULL if the node is not present
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *node;

	node = head;

	while (node != NULL && a != index)
	{
		a++;
		node = node->next;
	}
	if (a == index)
		return (node);

	return (NULL);
}

