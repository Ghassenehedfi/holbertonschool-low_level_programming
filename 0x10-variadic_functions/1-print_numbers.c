#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: the separator between numbers
 * @n: number of args
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n)
			printf("%s", separator);
	}

	putchar('\n');
	va_end(ap);
}
