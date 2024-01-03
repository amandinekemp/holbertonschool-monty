#include "monty.h"

/*
 * pall - Prints all elements in the stack.
 * @stack: A pointer to a pointer to the stack structure.
 * Return: -1 if the stack is empty or NULL, 0 otherwise.
 */

int	pall(struct stack **stack)
{
	struct stack_s *current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (0);
}