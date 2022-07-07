#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - dfff
 * @argc: jj
 * @argv: gg
 *
 * Return: fcss
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	else if ((!(strcmp("%", argv[2])) || !(strcmp("/", argv[2]))) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	else
	{
		func = get_op_func(argv[2]);
		printf("%d\n", func(num1, num2));
	}
	return (0);
}
