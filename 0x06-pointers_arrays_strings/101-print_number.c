#include "main.h"
/**
  * print_number - prints an integer
  * @n: integer to print
  */
void print_number(int n)
{
unsigned int divisor = 1;

if (n < 0)
{
_putchar('-');
n = -n;
}

while (divisor <= n / 10)
divisor *= 10;

while (divisor >= 1)
{
_putchar((n / divisor) +'0');
n -= (n / divisor) *divisor;
divisor /= 10;
}
}
