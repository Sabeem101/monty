#include "monty.h"

/**
 * op_pstr - prints the string starting at the stack head
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_pstr(stack_t **head, unsigned int curr_line)
{
	stack_t *curr = *head;
	int x;

	(void)curr_line;
	for (x = 0; curr && curr->n != 0 && !(curr->n > 127 || curr->n < 0); x++)
	{
		fprintf(stdout, "%c", curr->n);
		curr = curr->next;
	}
	fprintf(stdout, "\n");
}
