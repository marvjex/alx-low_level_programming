#include <stdio.h>
/* betty documentation type */
/**
 * A program prints single digit numbers o base 10
 * main - This is the entry point of the program
 * Return: 0 always (succedded)
 */
int main(void)
{
	int a;
for (a = 0; a <= 9; a++)
	printf("%d", a);
putchar('\n');
return (0);
}
