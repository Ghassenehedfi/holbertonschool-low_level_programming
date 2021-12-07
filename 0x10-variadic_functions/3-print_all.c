#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * pchr - print char arg
 * @ap: arg
 *
 **/
void pchr(va_list ap)
{
	printf("%c", va_arg(ap, int));

}

/**
 * pstr - print string arg
 * @ap: arg
 *
 **/
void pstr(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

/**
 * pint - print int arg
 * @ap: arg
 *
 **/
void pint(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * pflt - print float arg
 * @ap: arg
 *
 **/
void pflt(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_all - function that prints anything
 *
 * @format: format string
 **/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *sep = "";
	parse types[] = {{'c', pchr}, {'s', pstr},
					{'i', pint}, {'f', pflt}, {0, NULL}};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;

		while (types[j].chr && types[j].chr != format[i])
			j++;

		if (types[j].chr)
		{
			printf("%s", sep);
			types[j].f(ap);
			sep = ", ";
		}

		i++;
	}

	putchar('\n');
	va_end(ap);
}
