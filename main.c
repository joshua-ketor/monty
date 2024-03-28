#include "monty.h"

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	(void) argv;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	return (0);
}