#include "monty.h"

/**
 * push - Pushes an integer onto the stack.
 * @stack: A pointer to a pointer to the stack structure.
 * @line_number: The integer to be pushed onto the stack.
 * Return: 0 if successful, 1 otherwise.
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));
	if (new == NULL)
		return;
	new->n = line_number;
	new->next = *stack;
	*stack = new;
}
