#include "monty.h"

int pall(struct stack **stack)
{
    struct stack_s *current = *stack;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
    return (0);
}