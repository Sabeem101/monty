#include "monty.h"

/**
 * op_add - adds two elements of the stack
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_add(stack_t **head, unsigned int line_number)
{
	int val = 0;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	val = (*head)->n;
	op_pop(&datas.head, datas.line_number);
	(*head)->n += val;
}
