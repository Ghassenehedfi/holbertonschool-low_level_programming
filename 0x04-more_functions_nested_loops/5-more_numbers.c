#include "main.h"
/**
 * more_numbers - print numbers
 */
void more_numbers(void)

{

	int i;
	int a = 0;

while (a < 10)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
	_putchar('1');
	_putchar((i % 10) + 48);
}
		a++;
	_putchar('\n');
}
}
