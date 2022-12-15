#include "monty.h"

/**
 * f_pall - prints all value from the stack
 * @stack: double pointer to head of the stack
 * @line_number: the number of a line of the file
 *
 * Return: void
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	(void) line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
