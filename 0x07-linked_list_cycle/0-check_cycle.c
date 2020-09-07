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
    listint_t *slow;
    listint_t *fast;

    if (list == NULL)
        return 0;

    slow = list;
    fast = list->next;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        if (slow->n == fast->n)
        {
            return 1;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return 0;
}