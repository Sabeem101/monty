#ifndef _MONTY_H_
#define _MONTY_H_

#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct data - structure for data in the stack
 * @pval: values
 * @mode: stack or queue
 * @opcode: op code
 * @head: stack head
 * @trgt_file: file to open
 * @line_number: current line
 *
 * Description: structure to easily handle and do functions
 */
typedef struct data
{
	int pval;
	int mode;
	char *opcode;
	stack_t *head;
	FILE *trgt_file;
	unsigned int line_number;
} data;
data datas;

/* main.c */
int main(int argc, char **argv);

/* oppush.c */
void op_push(stack_t **head, unsigned int line_number);

/* oppall.c */
void op_pall(stack_t **head, unsigned int line_number);

/* oppint.c */
void op_pint(stack_t **head, unsigned int line_number);

/* oppop.c */
void op_pop(stack_t **head, unsigned int line_number);

/* opswap.c */
void op_swap(stack_t **head, unsigned int line_number);

/* opadd.c */
void op_add(stack_t **head, unsigned int line_number);

/* opnop.c */
void op_nop(stack_t **head, unsigned int line_number);

/* opsub.c */
void op_sub(stack_t **head, unsigned int line_number);

/* opdiv.c */
void op_div(stack_t **head, unsigned int line_number);

/* opmul.c */
void op_mul(stack_t **head, unsigned int line_number);

/* opmod.c */
void op_mod(stack_t **head, unsigned int line_number);

/* oppchar.c */
void op_pchar(stack_t **head, unsigned int line_number);

/* oppstr.c */
void op_pstr(stack_t **head, unsigned int line_number);

/* oprotl.c */
void op_rotl(stack_t **head, unsigned int line_number);

/* oprotr.c */
void op_rotr(stack_t **head, unsigned int line_number);

/* switch_modes.c */
void switch_modes(stack_t **head, unsigned int line_number);

/* execute.c */
void itexecs(void);

/* remove.c */
char *rmv_spaces(char *str);

/* open.c */
FILE *itopens(char *filename);

/* number.c */
size_t nleng(int num);
void nverify(char *token);

/* frees_stack.c */
void itfrees(stack_t *head);

#endif
