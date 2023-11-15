#include "simpleshell.h"
/**
 * f_buff - to free buffers
 * @buff: the buffer size
 * Return: to exit
 */
void f_buff(char **buff)
{
	int k = 0;

	if (!buff || buff == NULL)
		return;
	while (buff[k])
	{
		free(buff[k]);
		k++;
	}
	free(buff);
}
