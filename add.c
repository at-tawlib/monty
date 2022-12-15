#include "monty.h"

/**
 * f_add - adds the top two elements of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 *
 * Return: void
 */
void f_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int sum = 0;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;

	sum = (*stack)->n + (*stack)->next->n;
	temp->next->n = sum;
	*stack = temp->next;
	free(temp);
}
