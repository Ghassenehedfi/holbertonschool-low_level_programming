#include "main.h"
/**
 * _sqrt_recursion - returns the natural square
 * @n:int
 * Return:int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (-1);
	else
	return (sqrt_verif(1, n));
}
/**
 * sqrt_verif - verification
 * @n:int
 * @sq:int
 * Return:int
 */
int sqrt_verif(int sq, int n)
{
	if (sq * sq == n)
	return (sq);
	else if (sq > n)
	return (-1);
	else
	return (sqrt_verif(sq + 1, n));
}
