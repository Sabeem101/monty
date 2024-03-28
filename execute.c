#include "monty.h"

/**
 * itexecs - executes opcode commands
 * @void: void
 *
 * Return: void
 */
void itexecs(void)
{
	int x = 0;

	instruction_t instrus[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"mod", op_mod},
		{"pchar", op_pchar},
		{"pstr", op_pstr},
		{"rotl", op_rotl},
		{"rotr", op_rotr},
		{"queue", switch_modes},
		{"stack", switch_modes},
		{NULL, NULL},
	};
	for (x = 0; instrus[x].opcode; x++)
	{
		if (strcmp(datas.opcode, instrus[x].opcode) == 0)
		{
			instrus[x].f(&datas.head, datas.line_number);
			break;
		}
	}
	if (!instrus[x].opcode)
	{
		fprintf(stderr, "L%d: unkown instruction %s\n",
				datas.line_number, datas.opcode);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
}
