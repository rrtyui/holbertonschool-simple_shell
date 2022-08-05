#include "main.h"

/**
 * main - program
 *
 * Return: 0
 */
int main(void)
{
	char *buffer = NULL;
	int mgetline;
	char **b_token;
	size_t bsize = 0;
	int return_exit = 0;

	while (1)
	{
		prompt_s();
		signal(SIGINT, catch_ctrd);
		mgetline = getline(&buffer, &bsize, stdin);
		if (mgetline == EOF)
		{
			break;
		}
		if (buffer[0] == '\n')
		{
			continue;
		}
		b_token = stoken(buffer);
		if (b_token[0] == NULL)
		{
			free(b_token);
			continue;
		}
		if (_strcmp(b_token[0], "exit") == 0)
		{
			free(b_token);
			free(buffer);
			return (return_exit);
		}
		if (_strcmp(b_token[0], "env") == 0)
		{
			get_env();
			if (b_token)
			{
				free(b_token);
			}
			continue;
		}
		return_exit = child_p(b_token);
	}
	free(buffer);
	return (return_exit);
}
