#include"main.h"
/**
 * jack_bauer - 24 hours
 * Return: 0
 */
void jack_bauer(void)
{

int a, j, k, h, l, m;

for (a = 0; a < 24; a++)
{
l = a / 10;
m = a % 10;
for (j = 0; j < 60; j++)
{
k = j / 10;
h = j % 10;
_putchar(l + '0');
_putchar(m + '0');
_putchar(':');
_putchar(k + '0');
_putchar(h + '0');
_putchar('\n');
}
}
}
