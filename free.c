#include "monty.h"

/**
* global_free - This function frees a stack.
* @stack: Pointer to the top of the stack to be freed.
*/

void global_free(void)
{
	stack_t *to_free;
	stack_t *temp = NULL;
	/* Get the global head of the stack */
	to_free = *global_head;

	/* Loop through the stack */
	while (to_free)
	{
		/* Save the next element */
		temp = to_free->next;
		/* Free the current element */
		free(to_free);
		/* Move to the next element */
		to_free = temp;
	}
}
