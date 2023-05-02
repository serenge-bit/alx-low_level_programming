#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer
 * Return: point to the first node of the  reverser
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former_ptr;
	listint_t *ptr;


	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	former_ptr = *head;
	ptr = (*head)->next;

	while (ptr != NULL)
	{
		(*head)->next = ptr->next;
		ptr->next = former_ptr;
		former_ptr = ptr;
		ptr = (*head)->next;
	}
	*head = former_ptr;

	return (*head);
}
