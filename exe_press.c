#include "simpleshell.h"
/**
 * exe_press - the execute
 * @press: the command to free
 * @cmd: the array pointers to command
 * Return: to return 0
 */
void exe_press(char *press, char **cmd)
{
	char **cm = environ;
	pid_t my_pid;

	my_pid = fork();

	if (my_pid == -1)
	{
		perror("unsuccessful\n");
	}
	if (my_pid == 0)
	{
		execve(press, cmd, cm);
		perror(press);
		free(press);
		f_buff(cmd);
		exit(98);
	}
	else
	{
		wait(NULL);
	}
}
