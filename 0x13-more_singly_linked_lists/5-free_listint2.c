#include "lists.h"

/**
 * free_listint2 - a list is freed
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *lists;

	while (*head != NULL)
	{
		lists = *head;
		*head = (*head)->next;
		free(lists);
	}
}
