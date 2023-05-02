#include "lists.h"

/**
 * sum_listint - sum of all the data is returned(n)
 * @head: pointer
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int add = 0;

	temp = head;

	while (temp != NULL)
	{
		add = add + temp->n;
		temp = temp->next;
	}
	return (add);
}
