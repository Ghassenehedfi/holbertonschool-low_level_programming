#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc:int
 * @argv:char[]
 * Return:int
 */

int main(int argc, char *argv[])
{
int i, j, res = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
res += atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
