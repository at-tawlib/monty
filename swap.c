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

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	(*stack)->prev = temp;
	(*stack)->next = temp->next;
	temp->prev = NULL;
	if (temp->next)
		temp->next->prev = *stack;
	temp->next = *stack;
	*stack = temp;
}
