#include "lists.h"

/**
 * add_nodeint_end - new node added at the end of the list
 * @head: the double pointer
 * @n: data added
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *freshnode, *present;

	present = *head;

	while (present && present->next != NULL)
		present = present->next;

	freshnode = (listint_t *)malloc(sizeof(listint_t));

	if (freshnode == NULL)
	{
		return (NULL);
	}

	freshnode->n = n;
	freshnode->next = NULL;

	if (present)
	{
		present->next = freshnode;
	}

	else
	{
		*head = freshnode;
		return (freshnode);
	}
	return (freshnode);
}
