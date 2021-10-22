#include "main.h"
/**
 *
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s", argv[i]);
	printf("\n");
}
	return (0);
}
