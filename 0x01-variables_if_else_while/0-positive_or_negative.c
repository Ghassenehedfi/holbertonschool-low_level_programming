#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
/**
 * main -  assign a random number to the variable either positive or negative oor zero
 * Return: 0
 */
int main()
{
    int n;
    srand(time(0));
	n = rand() - RAND_MAX / 2;
    
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
  
    return 0;
}
