#include "simpleshell.h"
/**
 * to_check - to know if it is system funtion
 * @cmd: after tokenization
 * @buff: this is from getline
 * Return: if successful, return 1, if fail 0
 */
int to_check(char **cmd, char *buff)
{
	if (builtin_handler(cmd, buff))
		return (1);
	else if (**cmd == '/')
	{
		exe_press(cmd[0], cmd);
		return (1);
	}
	return (0);
}
