int main(void)
{
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		FILE *fp;
		char *line = NULL;

		size_t len = 0;
		ssize_t read;
		unsigned int line_number = 0;

		char *opcode;

		char *n;

		int i;

		struct stack *stack = NULL;

		fp = fopen(av[1], "r");
		if (fp == NULL)
		{
			fprintf(stderr, "Error: Can't open file %s\n", av[1]);
			exit(EXIT_FAILURE);
		}
		while ((read = getline(&line, &len, fp)) != -1)
		{
			line_number++;
			opcode = strtok(line, " \n");
			if (opcode == NULL)
				continue;
			if (strcmp("push", opcode) == 0)
			{
				n = strtok(NULL, " \n");
				if (n == NULL)
				{
					fprintf(stderr, "L%d: usage: push integer\n", line_number);
					exit(EXIT_FAILURE);
				}
				i = atoi(n);
				if (push(&stack, i) == 1)
				{
					fprintf(stderr, "Error: malloc failed\n");
					exit(EXIT_FAILURE);
				}
			}
			else if (strcmp("pall", opcode) == 0)
				pall(&stack);
			else
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
				exit(EXIT_FAILURE);
			}
		}
		free(line);
		fclose(fp);
		exit(EXIT_SUCCESS);
	}
}
