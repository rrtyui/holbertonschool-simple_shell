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
		free(args);
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

