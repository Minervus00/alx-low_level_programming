#include <stdlib.h>
#include <string.h>

/**
 * argstostr - dd
 * @ac: sss
 * @av: qqq
 *
 * Return: qq
 */
char *argstostr(int ac, char **av)
{
	char *qbn;
	int i, j, k, leng = 0, *para;

	if (ac == 0 || av == NULL)
		return (NULL);

	para = malloc(ac * sizeof(int));
	if (para == NULL)
	{
		free(para);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		para[i] = strlen(av[i]);
		leng += para[i];
	}

	qbn = malloc(leng + ac);
	if (qbn == NULL)
	{
		free(qbn);
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < para[i]; j++)
			qbn[k + j] = av[i][j];
		qbn[k + j] = '\n';
		k += j + 1;
	}
	free(para);
	return (qbn);
}
