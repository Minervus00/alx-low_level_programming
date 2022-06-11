#include "main.h"

/** print_line - fhsbsf
 *
 * @n: number of times
 *
 * Return: noooop
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
