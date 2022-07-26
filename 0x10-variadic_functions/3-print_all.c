#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: ON success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_all - hhgggv
 * @format: gggv
 *
 * Return: noop
 */
void print_all(const char * const format, ...)
{
	va_list pmk;
	char *sval, *p;
	int i = 0, chk;

	if (format == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	va_start(pmk, format);
	p = strdup(format);
	while (*p)
	{
		chk = 1;
		if (strchr("cifs", *p) != NULL)
		{
			switch (i)
			{
				case 0:
					break;
				default:
					printf(", ");
			}

			switch (*p)
			{
				case 'c':
					i++;
					_putchar(va_arg(pmk, int));
					break;
				case 'i':
					i++;
					printf("%d", va_arg(pmk, int));
					break;
				case 'f':
					i++;
					printf("%f", va_arg(pmk, double));
					break;
				case 's':
					i++;
					sval = va_arg(pmk, char *);
					if (sval == NULL)
					{
						printf("(nil)");
						chk = 0;
					}

					while (chk == 1 && *sval)
					{
						printf("%c", *sval);
						sval++;
					}
			}

		}
		p++;
	}
	va_end(pmk);
	printf("\n");
}

