#SIMPLE SHELL PROJECT

Developed by Marcelo Casaña and Felippe Mari for Holberton School Uruguay.

## DESCRIPTION

The project is a reproduction of a standard command interpreter for the system.
Written in C and compiled on Ubuntu 20.04 LTS using GCC version 9.4.0.

# What does it do
Interprets orders.
How to use it

## COMPILATION

Program is compiled on Ubuntu 20.04 LTS with the following command:

	$ gcc -Wall -Werror -Wextra -pedantiic -std=gnu89 *.c -o hsh

# FILES & FUNCTIONS

`shell.c` - main program
`main.h` - main header file: includes to libraries, structs and functions needed
`man_1_simple_shell` - man page
`stokeni.c` - function to tokenize certain buffer
`str_functions.c` - various string functions
`used_functions.c` - other functions

## EXAMPLE

Interactive mode:

$ ./hsh
$ /bin/ls
simple_shell  main.c shell.c
$
$ exit
$

Non-interactive mode:

$ echo "/bin/ls" | ./simple_shell
simple_shell main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
simple_shell main.c shell.c test_ls_2
simple_shell main.c shell.c test_ls_2
$

## FLOWCHART

![flowchart](Coming soon...)
Holberton school simple shell
