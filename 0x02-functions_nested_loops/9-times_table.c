#include"main.h"
/**
 * times_table - time table
 * Return: 0
 */
void times_table(void)

{
int i, j, k, h, e;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
h = k / 10;
e = k % 10;
if (j == 0)
{
_putchar('0');
}
else if (k < 10)
{
_putchar(' ');
_putchar('0' + e);
}
else
{
_putchar('0' + h);
_putchar('0' + e);
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
