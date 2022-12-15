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
	stack_t *first, *second, *temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	first = *stack;
	second = (*stack)->next;
	temp = first;
	first->next = second->next;
	first->prev = second;
	if (second->next != NULL)
		second->next->prev = first;
	second->next = temp;
	second->prev = NULL;
	*stack = second;
}
