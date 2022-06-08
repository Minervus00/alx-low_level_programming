#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * print_last_digit - the taskerr
 * @n: the parameterto give the abs
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x = abs(n) % 10;

	_putchar('0' + x);
	return (x);
}
