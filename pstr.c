#include "monty.h"

/**
 * pstr -> Print the string starting at the top of the stack
 * @head: Stack Head
 * @counter: Line Number
 */

void pstr(stack_t **head, unsigned int counter)
{
    stack_t *temp = *head;

    (void)counter;
    while (temp != NULL)
    {
        if (temp->n <= 0 || temp->n > 127)
            break;
        printf("%c", temp->n);
        temp = temp->next;
    } printf("\n");
}
