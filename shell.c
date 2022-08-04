#include "main.h"

/**
 *
 *
 *
 */
int main(void)
{
	char *buffer = NULL;
	int mgetline;
	char **b_token;
	size_t bsize = 0;

	while (1)
	{
		prompt_s();

		signal(SIGINT,catch_ctrd);

		mgetline = getline(&buffer,&bsize,stdin);

		if (mgetline == EOF)
		{
			break;
		}
		if (buffer[0] == '\n')
		{
			continue;
		}
		b_token = stoken(buffer);

		if(b_token[0] == NULL)
		{
			continue;
			free(buffer);
			free(b_token);
		}

		if (_strcmp(b_token[0],"exit") == 0)
		{
			free (b_token);
			free (buffer);
			exit(0);
		}

		if (_strcmp(b_token[0],"exit") == 0)
		{
			free (b_token);
			free (buffer);
			exit(0);
		}

		if (_strcmp(b_token[0],"env") == 0)
		{
			get_env();
			if(b_token)
			{
				free(b_token);
			}
			continue;
		}

		child_p(b_token);
		
	}
	free (buffer);
	return (0);
}

int prompt_s(void)
{

	if (isatty(STDIN_FILENO) == 1)
	{
		write(1, "#cisfun$ ", 9);
	}
	return (0);

}

void catch_ctrd(int sign)
{
	if (sign == SIGINT)
	{
		write(STDOUT_FILENO, "\n", 2);
		prompt_s();
	}
}
