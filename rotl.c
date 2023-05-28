#include "monty.h"

/**
 * rotl -> Rotates the stack to the top
 * @head: Stack Head
 * @counter: Line Number
 */

void rotl(stack_t **head, unsigned int counter)
{
    stack_t *temp = *head;
    int n;

    (void)counter;
    if (*head == NULL || (*head)->next == NULL)
        return;
    n = (*head)->n;
    while (temp->next != NULL)
    {
        temp->n = temp->next->n;
        temp = temp->next;
    }
    temp->n = n;
}
