#include "monty.h"

/**
 * op_rotr - rotates the stack to its end
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_rotr(stack_t **head, unsigned int curr_line)
{
	stack_t *prior = *head;
	int x;

	(void)curr_line;
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
