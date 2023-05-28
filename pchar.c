#include "monty.h"

/**
 * pchar -> Print the char at the top of the stack
 * @head: Stack Head
 * @counter: Line Number
 */

void pchar(stack_t **head, unsigned int counter)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
        exit(EXIT_FAILURE);
    }
    if ((*head)->n < 0 || (*head)->n > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
        exit(EXIT_FAILURE);
    }
    printf("%c\n", (*head)->n);
}
