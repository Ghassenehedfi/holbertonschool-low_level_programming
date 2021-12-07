#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of elements
 *
 * Return: sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (n);

	va_start(a, n);

	for (i = 0; i < n; i++)
	{

		sum += va_arg(a, int);
	}

	va_end(a);
	return (sum);
}
