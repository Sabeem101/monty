#include "monty.h"

/**
 * itopens - opens a file
 * @filename: file name
 *
 * Return: FILE
 */
FILE *itopens(char *filename)
{
	FILE *trgt_file;

	trgt_file = fopen(filename, "r");
	if (!trgt_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	return (trgt_file);
}
