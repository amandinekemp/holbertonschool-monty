#include "monty.h"

/**
 * pall - Prints all elements in the stack.
 * @stack: A pointer to a pointer to the stack structure.
 * @line_number: The line number of the command in the file
 * Return: -1 if the stack is empty or NULL, 0 otherwise.
 */

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
