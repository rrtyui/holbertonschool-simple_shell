# SIMPLE SHELL PROJECT

Developed by Marcelo Casaña and Felippe Mari for Holberton School Uruguay.

## DESCRIPTION

The project is a reproduction of a standard command interpreter for the system.
Written in C and compiled on Ubuntu 20.04 LTS using GCC version 9.4.0.

# What does it do
Interprets orders when an input is given.

Incorporates features such as: process control, I/O redirection, etc.

## COMPILATION

Program is compiled on Ubuntu 20.04 LTS with the following command:

	$ gcc -Wall -Werror -Wextra -pedantiic -std=gnu89 *.c -o hsh

## FILES & FUNCTIONS

`shell.c` - main program

`main.h` - main header file: includes to libraries, structs and functions needed

`man_1_simple_shell` - man page

`stokeni.c` - function to tokenize certain buffer

`str_functions.c` - various string functions

`used_functions.c` - other functions

`AUTHORS` - Contributors in the repository

`README.md` - Information about the repository

## EXAMPLE

### Interactive mode:

	$ ./hsh
	$ /bin/ls
	hsh main.c shell.c
	$
	$ exit
	$

### Non-interactive mode:

	$ echo "/bin/ls" | ./simple_hsh
	hsh main.c shell.c test_ls_2
	$
	$ cat test_ls_2
	/bin/ls
	/bin/ls
	$
	$ cat test_ls_2 | ./hsh
	hsh main.c shell.c test_ls_2
	hsh main.c shell.c test_ls_2
	$

## FLOWCHART

![flowchart](Coming soon...)
Holberton school simple shell
