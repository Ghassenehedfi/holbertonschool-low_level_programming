#include "variadic_functions.h"

/**
 * print_strings -  print strings, followed by a new line.
 *
 * @separator: the separator between strings
 * @n: number of args
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;


	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		s = va_arg(ap, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator != NULL && i != n)
			printf("%s", separator);
	}

	putchar('\n');

	va_end(ap);
}
