#include "monty.h"

/*
 * push - Pushes an integer onto the stack.
 * @stack: A pointer to a pointer to the stack structure.
 * @n: The integer to be pushed onto the stack.
 * Return: 0 if successful, 1 otherwise.
 */

int	push(struct stack **stack, int n)
{
	struct stack_s *new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (1);
	new->n = n;
	new->next = *stack;
	*stack = new;
	return (0);
}