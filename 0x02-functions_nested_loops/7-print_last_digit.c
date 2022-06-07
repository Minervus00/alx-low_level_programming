#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - the taskerr
 * @n: the parameterto give the abs
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	char x = abs(n) % 10;

	_putchar(x)
	return (x);
}
