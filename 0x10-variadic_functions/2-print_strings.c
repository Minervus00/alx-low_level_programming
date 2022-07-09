#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_strings - sqwwxx
 * @separator: sdft
 * @n: hhh
 *
 * Return: ggg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char sepa[10], *sql;
	unsigned int i;

	if (separator == NULL)
		strcpy(sepa, "");
	else
		strcpy(sepa, separator);

	va_start(strs, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			sql = va_arg(strs, char *);
			if (sql == NULL)
				printf("(nil)");
			else
				printf("%s", sql);

			if (i != (n - 1))
				printf("%s", sepa);
		}
	}
	printf("\n");
	va_end(strs);
}
