void (*f)(stack_t **stack, unsigned int line_number)
{
	if (strcmp("push", opcode) == 0)
		push(stack, line_number);
	else if (strcmp("pall", opcode) == 0)
		pall(stack, line_number);
	else
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
}
