#include "monty.h"

/**
 * op_pstr - prints the string starting at the stack head
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_pstr(stack_t **head, unsigned int line_number)
{
	stack_t *curr = *head;
	int x;

	(void)line_number;
	for (x = 0; curr && curr->n != 0 && !(curr->n > 127 || curr->n < 0); x++)
	{
		fprintf(stdout, "%c", curr->n);
		curr = curr->next;
	}
	fprintf(stdout, "\n");
}
