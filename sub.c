#include "monty.h"

/**
 * _sub -> Subtract the top and second top elements of the stack
 * @stack: Stack
 * @line_number: Line Number
*/

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *num;
	int sub;

	num = *stack;
	if (num == NULL || num->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	} sub = num->next->n - num->n;
	num->next->n = sub;
	_pop(stack, line_number);
}
