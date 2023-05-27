#include "monty.h"

/**
 * execute -> Executes the opcode
 * @opcode: Opcode
 * @stack: Stack
 * @line_number: Line Number
*/

void execute(char *opcode, stack_t *stack, unsigned int line_number)
{
	int i;
	instruction_t command[] = {
		{"push", _push}, {"pall", _pall}, {"pint", _pint},
		{"pop", _pop}, {"swap", _swap}, {"add", _add},
		{"nop", _nop}, {"sub", _sub}, {"div", _div},
		{"mul", _mul}, {"mod", _mod}, {NULL, NULL}
	};


	for (i = 0; command[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, command[i].opcode) == 0)
		{
			command[i].f(&stack, line_number);
			break;
		}
	}
	if (command[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
