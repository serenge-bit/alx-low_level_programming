#include "lists.h"

/**
 * add_nodeint - new node at the begining of a list
 *@head: double pointer
 *@d: data stored in new node
 *Return: elements stored address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
