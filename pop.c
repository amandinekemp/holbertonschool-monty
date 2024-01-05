#include "monty.h"

/**
 * pop - removes the top element of the stack
 * supprime l'élément supérieur de la pile
 * @stack: pointer to the top of the stack
 * @line_number: line number in the file
 */

void pop(stack_t **stack, unsigned int line_number)
{
	/* Temporary pointer to the top of the stack */
	stack_t *temp;

    /* If the stack is empty, print an error message and exit */
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

    /* Point temp to the top of the stack */
	temp = *stack;
	/* Move the stack pointer to the next element */
	*stack = (*stack)->next;

    /* Free the memory of the popped element */
	free(temp);
}
