#include "monty.h"

/**
 * f_rotr - rotates the stact to the bottom
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 *
 * Return: void
 */
void f_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *node;
	(void) line_number;

	node = *stack;
	while (node)
	{
		temp = node;
		node->next = temp->prev;
		node->prev = temp->next;
		node = temp->next;
	}
	*stack = temp;
}
