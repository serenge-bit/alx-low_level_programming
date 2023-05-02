#include "lists.h"

/**
 * free_listint - function to free lists
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}

}
