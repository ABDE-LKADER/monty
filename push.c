#include "monty.h"

/**
 * is_num -> Checks if a string is a number
 * @str: String
 * Return: Depend Condition
*/

int is_num(char *str)
{
	int i = 0;

	str = strtok(str, " \n");
	if (str[0] == '-')
		i++;
	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
	} return (0);
}

/**
 * _push -> Pushes an element to the stack
 * @stack: Stack
 * @line_number: Line Number
*/

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	char *arg;

	arg = strtok(NULL, " \n");
	if (arg == NULL || is_num(arg) == -1)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	} new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	} new->n = atoi(arg);
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
