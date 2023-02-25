#include <stdio.h>
/* more headers go there */

/* Betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (complete)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d is positive/n", n);
	else if (n == 0)
	printf("%d is zero/n", n);
	else
	prntf("%d is negative/n", n);
	return (0);
}
