#include "monty.h"

/**
 * pstr -> Print the string starting at the top of the stack
 * @head: Stack Head
 * @counter: Line Number
 */

void pstr(stack_t **head, unsigned int counter)
{
    stack_t *tmp = *head;

    (void)counter;
    while (tmp != NULL)
    {
        if (tmp->n <= 0 || tmp->n > 127)
            break;
        printf("%c", tmp->n);
        tmp = tmp->next;
    } printf("\n");
}
