#include "monty.h"

/**
 * parse_command - Parse commands and execute corresponding function
 * @stack: Pointer to the stack's top
 * @op: The opcode to be executed
 * @line_number: The line number of the command in the file
 */
void parse_command(stack_t **stack, char *op, unsigned int line_number)
{
	int index;

	/* Array of opcodes and their functions */
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		/*{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},*/
		{NULL, NULL} /* End of array */
	};

	/* Loop through instructions */
	for (index = 0; instructions[index].opcode; index++)
	{
		/* If opcode matches, execute function */
		if (strcmp(op, instructions[index].opcode) == 0)
		{
			instructions[index].f(stack, line_number);
			return;
		}
	}

	/* If opcode not found and not a comment */
	if (strlen(op) != 0 && op[0] != '#')
	{
		/* Error message */
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
	}
}
