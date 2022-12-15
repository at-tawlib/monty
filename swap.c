#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @stack: double pointer to top of stack
 * @line_number: line number
 *
 * Return: void
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int temp_n;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	temp_n = temp->n;
	temp->n = temp->next->n;
	temp->next->n = temp_n;
}
