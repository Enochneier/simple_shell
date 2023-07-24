#include "simple_shell.h"

/**
 * free_dp - function that frees all the memory allocated for command.
 * @command: The pointer to allocated memory to free.
 * Return: 0
 */
void free_dp(char **command)
{
	size_t i = 0;

	if (command == NULL)
		return;

	while (command[i])
	{
		free(command[i]);
		i++;
	}

	if (command[i] == NULL)
		free(command[i]);
	free(command);
}


/**
 * free_exit - function that frees all the memory allocated and exit.
 * @command: The pointer to allocated command memory to free.
 * Return: 0
 */
void free_exit(char **command)
{
	size_t i = 0;

	if (command == NULL)
		return;

	while (command[i])
	{
		free(command[i]);
		i++;
	}

	if (command[i] == NULL)
		free(command[i]);
	free(command);
	exit(EXIT_FAILURE);
}