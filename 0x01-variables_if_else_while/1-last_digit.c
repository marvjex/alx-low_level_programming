#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers go inside there */

/* Betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return Always 0; (successful)
 */
int main(void)
{
        int n;
	int m;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* the code goes here */
        m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
        if (m == 0)
                printf("last digit of %d is %d and is 0\n", n, m);
        if (m < 6 && m != 0)
              printf("last digit of %d is %d and is less than 6 not 0\n", n, m);
        return (0);
}