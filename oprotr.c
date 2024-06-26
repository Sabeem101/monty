#include "monty.h"

/**
 * op_rotr - rotates the stack to its end
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_rotr(stack_t **head, unsigned int line_number)
{
	stack_t *prior = *head;
	int x;

	(void)line_number;
	if (!*head || (*head)->next == NULL)
	{
		return;
	}
	for (x = 0; prior; x++)
	{
		if (!prior->next)
			break;
		prior = prior->next;
	}
	prior->next = *head;
	prior->prev->next = NULL;
	(*head)->prev = prior;
	(*head) = prior;
	prior->prev = NULL;
}
