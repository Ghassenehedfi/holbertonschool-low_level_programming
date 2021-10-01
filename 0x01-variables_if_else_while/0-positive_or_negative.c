#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
int main()
{
    int n;
    srand(time(0));
	n = rand() - RAND_MAX / 2;
    
    if (n > 0)
        printf("%d is positive.", n);
    else if (n < 0)
        printf("%d is negative.", n);
    else if (n == 0)
        printf("%d is zero.", n);
  
    return 0;
}
