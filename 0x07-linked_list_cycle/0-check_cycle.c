#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - prints all elements of a listint_t list
 * @list: pointer to head of list
 * Return: 1 if has a cycle, 0 otherwise
 */

int check_cycle(listint_t *list)
{
    listint_t *head;
    listint_t *current;

    if (list == NULL)
        return (NULL);

    head = list;
    current = list;

    while (current != NULL)
    {
        if (current->next == head)
        {
            return 1;
        }
        current = current->next;
    }
    return 0;
}