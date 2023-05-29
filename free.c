#include "monty.h"

/**
 * free_stack -> Frees the stack
 * @head: Stack Head
*/

void free_stack(stack_t *head)
{
	stack_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
