#include "monty.h"

/**
 * op_pchar - prints the character at the head of the stack
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_pchar(stack_t **head, unsigned int curr_line)
{
	if (!*head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n > 127 || (*head)->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*head)->n);
}
