#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * print_last_digit - the taskerr
 * @n: the parameter to give the abs
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x = ((unsigned int) n) % 10;

	_putchar('0' + x);
	return (x);
}
