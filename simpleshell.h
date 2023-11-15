#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdbool.h>
#include<time.h>
#include <unistd.h>
#include <sys/stat.h>

/** environment */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* prototypes used */
void show_prompt(void);
int _putchar(char c);
int _printi(char *k);
void f_buff(char **buff);
void exe_press(char *press, char **cmd);
char **token_break(char *l);
int builtin_handler(char **comm, char *l);
int to_check(char **cmd, char *buff);
void printing_cm(void);
char *finding_path(void);
char *path_test(char **p, char *comm);
char *add_path(char *p, char *comm);
void signal_handle(int n);
void close_page(char **comm, char *l);

/**
 * struct builtin - builtin structure
 * @cm: environment
 * @exit: to exit
 * builtin: the structure
 */
struct builtin
{
	char *cm;
	char *exit;
} builtin;

/**
 * struct form - the structure of the form
 * @total_exit: the final exit
 * @count: to count
 * form - the form
 */
struct form
{
	int total_exit;
	int count;
} form;

/**
 * struct flags - the structure term flag
 * @interactive: section to interact
 * flag - the flag
 */
struct flags
{
	bool interactive;
} flags;

char *_strchr(char *k, char c);
int _strncmp(char *k1, char *k2, int n);
int _strcmp(char *k1, char *s2);
char *_strdup(char *k);
int _strlen(char *k);

#endif
