#include "monty.h"

/**
 * rotl -> Rotates the stack to the top
 * @head: Stack Head
 * @counter: Line Number
 */

void rotl(stack_t **head, unsigned int counter)
{
    stack_t *tmp = *head;
    int n;

    (void)counter;
    if (*head == NULL || (*head)->next == NULL)
        return;
    n = (*head)->n;
    while (tmp->next != NULL)
    {
        tmp->n = tmp->next->n;
        tmp = tmp->next;
    } tmp->n = n;
}
