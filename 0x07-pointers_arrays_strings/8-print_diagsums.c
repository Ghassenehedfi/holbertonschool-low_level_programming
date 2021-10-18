#include "main.h"
/**
  * print_diagsums - prints the sum
  * @a: int
  * @size: int
  * Return: 0
  */
void print_diagsums(int *a, int size)
{
	int b, x = 0, y = 0;

	for (b = 0; b < size; b++)
	{
		x += a[(size + 1) * b];
		y += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", x, y);
}
