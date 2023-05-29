#include "monty.h"

/**
 * _pint -> Prints the value at the top of the stack
 * @stack: Stack
 * @line_number: Line Number
*/

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *num;

	num = *stack;
	if (num == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	} printf("%d\n", num->n);
}
