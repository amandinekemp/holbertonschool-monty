#include "monty.h"

stack_t **global_head; /*Declare a global pointer to the head of the stack*/

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	stack_t *head; /*Declare a pointer to the head of the stack*/

	if (argc != 2) /*Check if the number of arguments is not equal to 2*/
	{
		/*If so, print an error message and exit the program*/
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL;
	/* Assign the address of the head of the stack to the global pointer */
	global_head = &head;
	/* Read the file passed as argument and fill the stack */
	read_file(argv[1], &head);
	/* Register the function global_free to be called when the program exits */
	atexit(global_free);
	exit(EXIT_SUCCESS);
}
