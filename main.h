#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

extern char **environ;
int main(void);
int vexec(char **args);
char **stoken(char *buffer);
int get_env(void);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int child_p(char **args);
void  catch_ctrd(int sign);
int prompt_s(void);
#endif
