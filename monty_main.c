#include "monty.h"

/**
* main - Entry point for monty interpreter.
* @argc: Arguments counts passed to the program.
* @argv: Argument vector.
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	bus_t bus = {NULL, file, NULL, 0};

	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t n_line = 1;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (n_line > 0)
	{
		content = NULL;
		n_line = getline(&content, &size, file);
		bus.content = content;
		line_number++;
		if (n_line > 0)
		{
			execute(content, &stack, line_number, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
