#include "main.h"
/**
 * print_last_digit - last digit
 * @n : int
 * Return: 0
 */
int print_last_digit(int n)
{

long x = n;
if (x < 0)
x = -x;
if (x > 10)
{
x %= 10;
}
if ((x < 10) && (x != 0))
{
_putchar(x + '0');
return (x);
}
_putchar('0');
return (0);
}
