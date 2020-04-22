#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert node in the right order
 * @head: pointer to head of list
 * @number: Number to insert
 * Return: Address of node inserted or NULL if failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	new = malloc(sizeof(listint_t));

	while (current != NULL)
	{
		if (number < current->n)
		{
			new->n = current->n;
			current->n = number;
			new->next = current->next;
			current->next = new;
			return (current);
		}
		if (current->next == NULL)
		{
			new->n = number;
			new->next = NULL;
			current->next = new;
			break;
		}
		current = current->next;
	}
	return (new);
}
