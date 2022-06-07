#include "main.h"

/**
 * print_sign - the taskerr
 * @n: the parameter checked
 *
 * Return: 1 if positive, 0 if is zero, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
