#include "main.h"
/**
 * _isupper - uppercase
 * @c: int
 * Return: 0
 */
int _isupper(int c)

{

	char i;
	for (i = 'a'; i <= 'A' ; i++)
{
	if (i == c)
	return(1);
}
	return (0);
}
