#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
int main(void)
{
        int n;
        int lastDigit;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        lastDigit= n % 10 ;
        if (n > 5)
        printf("Last digit of %d is %i and is greater than 5.",n,lastDigit);
        else if (n == 0)
        printf("Last digit of %d is %i and is 0.",n,lastDigit);
        else if (n < 6)
        printf("Last digit of %d is %i and is less than 6 and not 0.",n,lastDigit);
        return (0);
}
