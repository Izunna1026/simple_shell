#include "simpleshell.h"
/**
 * token_break - tokenization, breaking the words
 * @l: the lines to work
 * Return: to return 0
 */
char **token_break(char *l)
{
	size_t in = 0, flag = 0;
	char **token = NULL;
	char *buff = NULL, *tok = NULL, *delim = " :\t\r\n", *bufs = NULL;
	int size_tok = 1;

	buff = _strdup(l);
	if (!buff)
		return (NULL);
	bufs = buff;
	while (*bufs)
	{
		if (_strchr(delim, *bufs) != NULL && flag == 0)
		{
			size_tok++;
			flag = 1;
		}
		else if (_strchr(delim, *bufs) == NULL && flag == 1)
		{
			flag = 0;
		}
		bufs++;
	}

	token = malloc(sizeof(char *) * (size_tok + 1));
	tok = strtok(buff, delim);
	while (tok)
	{
		token[in] = _strdup(tok);
		if (token[in] == NULL)
		{
			free(token);
			return (NULL);
		}
		tok = strtok(NULL, delim);
		in++;
	}
	token[in] = '\0';
	free(buff);
	return (token);
}
