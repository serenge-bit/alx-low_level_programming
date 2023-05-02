#include "lists.h"

/**
 * pop_listint - it deletes the head node
 * @head: pointer to the head
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *leadhead;
	int n;

	leadhead = *head;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	(*head) = (*head)->next;
	free(leadhead);

	return (n);
}
