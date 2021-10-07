#include "main.h"
/**
 * _isdigit - 0 to 9
 * @c: int
 * Return: 0
 */
int _isdigit(int c)

{
	int i;

for (i = '0'; i <= '9'; i++)
{
if (i == c)
	return (1);
}
	return (0);
}
