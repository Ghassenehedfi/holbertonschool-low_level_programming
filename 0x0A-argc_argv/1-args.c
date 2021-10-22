#include "main.h"
/**
 * main - prints the numver of arguments
 * @argc: int
 * @argv: int
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for (i = 1; i < argc; i++)
{
	printf("%s", argv[i]);
}
	return (0);
}
