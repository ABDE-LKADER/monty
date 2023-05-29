#include "monty.h"

/**
 * _pall -> Prints all the values on the stack
 * @stack: Stack
 * @line_number: Line Number
*/

void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *num;

	for (num = *stack; num != NULL; num = num->next)
		printf("%d\n", num->n);
}
