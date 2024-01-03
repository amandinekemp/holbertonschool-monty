#include "monty.h"

int push(struct stack **stack, int n)
{
    struct stack *new = malloc(sizeof(struct stack));
    if (new == NULL)
        return (1);
    new->n = n;
    new->next = *stack;
    *stack = new;
    return (0);
}