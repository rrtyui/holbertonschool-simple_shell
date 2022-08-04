#include "main.h"

/**
 * stoken - function to tokenize certain buffer
 * @buffer: the buffer,lol
 * Return: argv val
 */
char **stoken(char *buffer)
{
	char **argk;
	char *tokeni;
	int i;

	tokeni = strtok(buffer, " \n\t ");

	if(tokeni == NULL)
		return (NULL);

	argk = calloc(1024, sizeof(char *));
	if (!argk)
		return (NULL);

	for(i = 0; i < 1024 && tokeni != NULL; i++)
	{
		argk[i] = tokeni;
		tokeni = strtok(NULL, " \n\t");
	}
	argk[i] = NULL;

	return (argk);
}
