#include "monty.h"

/**
 * _mod -> Modulo
 * @stack: Stack
 * @line_number: Line Number
*/

void _mod(stack_t **stack, unsigned int line_number)
{
	int num;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	} num = (*stack)->next->n;
	if (num == 0)
	{
		fprintf(stderr, "L%d: division by zero", line_number);
		exit(EXIT_FAILURE);
	} num = num % (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = num;
}
