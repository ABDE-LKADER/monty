#include "monty.h"

/**
 * _swap -> Swaps the top two elements of the stack
 * @stack: Stack
 * @line_number: Line Number
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *num;
	int _switch;

	num = *stack;
	if (num == NULL || num->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	} _switch = num->n;
	num->n = num->next->n;
	num->next->n = _switch;
}
