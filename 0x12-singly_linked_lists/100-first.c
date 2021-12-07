#include <stdio.h>

/**
 * thefirst - execute before main
 **/
void __attribute__ ((constructor)) thefirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
