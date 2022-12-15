#include "monty.h"

/**
 * parse_command - parses commands from the line op
 * @stack: pointer to the head of the stack
 * @op: the line with the commands/instructions
 * @line_num: line number
 *
 * Return: void
 */
void parse_command(stack_t **stack, char *op, unsigned int line_num)
{
	int i;
	instruction_t ops[] = {
		{"push", f_push},
		{"pall", f_pall},
		{NULL, NULL}
	};
	for (i = 0; ops[i].opcode; i++)
		if (strcmp(op, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_num);
			return;
		}
	if (strlen(op) != 0 && op[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_num, op);
		exit(EXIT_FAILURE);
	}
}
