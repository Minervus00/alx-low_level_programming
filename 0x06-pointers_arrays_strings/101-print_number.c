#include "main.h"

/**
 * print_number - thaaaaaat
 * @n: number
 *
 * Return: nothing
 */
void print_number(int n)
{
	int tin = 10, d;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n >= tin)
		tin *= 10;

	tin /= 10;
	while (tin > 1)
	{
		d = n / tin;
		_putchar('0' + d);
		n -= d * tin;
		tin /= 10;
	}
	_putchar('0' + n);
}
