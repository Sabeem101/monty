#include "monty.h"

/**
 * main - main program function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: succeful exit or failed
 */
int main(int argc, char **argv)
{
	char line[100], *tok;
	int x = 0;

	datas.mode = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	datas.trgt_file = itopens(argv[1]);
	while (fgets(line, sizeof(line), datas.trgt_file) != NULL)
	{
		if (strlen(rmv_spaces(line)) < 3 || rmv_spaces(line)[0] == '#')
		{
			datas.curr_line++;
			continue;
		}
		datas.curr_line++;
		tok = strtok(line, " \n");
		for (x = 0; tok != NULL && x < 2; x++)
		{
			if (x == 0)
				datas.opcode = tok;
			if (strcmp(datas.opcode, "push") != 0)
				break;
			if (x == 1)
				nverify(tok);
			tok = strtok(NULL, " \n");
		}
		if (strcmp(datas.opcode, "push") == 0 && x == 1)
		{
			fprintf(stderr, "L%d: Usage: Push integer\n", datas.curr_line);
			itfrees(datas.head);
			exit(EXIT_FAILURE);
		}
		itexecs();
	}
	itfrees(datas.head);
	exit(EXIT_SUCCESS);
}
