#include "simpleshell.h"
/**
 * main - creating simple shell
 * @ac: argument counter
 * @av: argument vector
 * @envp: the environment
 * Return: to return 0
 */
int main(int ac, char **av, char *envp[])
{
	size_t buf = 0;
	ssize_t size_line = 0;
	char *l = NULL, *pcommand = NULL, *p = NULL;
	char **comm = NULL, **ps = NULL;
	(void)envp, (void)av;

	if (ac < 1)
		return (-1);
	signal(SIGINT, signal_handle);
	while (1)
	{
		f_buff(comm);
		f_buff(ps);
		free(pcommand);
		show_prompt();
		size_line = getline(&l, &buf, stdin);
		if (size_line < 0)
			break;
		form.count++;
		if (l[size_line - 1] == '\n')
			l[size_line - 1] = '\0';
		comm = token_break(l);
		if (comm == NULL || *comm == NULL || **comm == '\0')
			continue;
		if (to_check(comm, l))
			continue;
		p = finding_path();
		ps = token_break(p);
		pcommand = path_test(ps, comm[0]);
		if (!pcommand)
			perror(av[0]);
		else
			exe_press(pcommand, comm);
	}
	if (size_line < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(l);
	return (0);
}
