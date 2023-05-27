#include "monty.h"

/**
 * _push -> Pushes an element to the stack
 * @stack: Stack
 * @line_number: Line Number
*/

void _push(stack_t **stack, unsigned int line_number)
{
	int num;
	char *arg;
	stack_t *new = malloc(sizeof(stack_t));

	arg = strtok(NULL, " ");
	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	} num = atoi(arg);
	if (is_num(arg) == -1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	} new->n = num;
	new->prev = NULL;
	new->next = *stack;
	*stack = new;
}
