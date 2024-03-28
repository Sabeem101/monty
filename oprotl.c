#include "monty.h"

/**
 * op_rotl - rotates the stack to it's head
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_rotl(stack_t **head, unsigned int curr_line)
{
	stack_t *prior = *head;
	int x;

	(void)curr_line;
	if (!*head)
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
	(*head)->prev = prior;
	(*head) = (*head)->next;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;
}
