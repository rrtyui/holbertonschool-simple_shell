#include "main.h"
/**
 *
 *
 */

int child_p (char **args)
{
	pid_t pid_child;
	int status;

	pid_child = fork();

	if (pid_child == -1)\
	{
		perror ("Error");
		return (1);
	}

	else if (pid_child == 0)
	{
		if (execve(args[0],args,NULL) == -1)
		{
			perror ("Error");
		}
		free(args);
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
		{
			free(args);
			return (WEXITSTATUS(status));
		}
	}
	return (0);
}

/**
 *
 *
 *
 */
int get_env(void)
{
	unsigned int string = 0, environ_str = 0;

	for (;environ[string] !=  NULL; string++)
	{
		write(1,environ[environ_str],_strlen(environ[environ_str]));
		write(1, "\n",2);
		environ_str++;
	}
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
