#include "monty.h"

/**
 * op_pchar - prints the character at the head of the stack
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_pchar(stack_t **head, unsigned int line_number)
{
	if (!*head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n > 127 || (*head)->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*head)->n);
}
