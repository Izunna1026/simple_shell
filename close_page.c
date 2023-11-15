#include "simpleshell.h"
/**
 * close_page - to exit command
 * @comm: the commanf broken
 * @l: the stdin input read
 * Return: to exit
 */
void close_page(char **comm, char *l)
{
	free(l);
	f_buff(comm);
	exit(0);
}
