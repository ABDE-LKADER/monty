#include "monty.h"

/**
 * _pop -> Removes the top element of the stack
 * @stack: Stack
 * @line_number: Line Number
*/

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *num;

	num = *stack;
	if (num == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = num->next;
	free(num);
}
