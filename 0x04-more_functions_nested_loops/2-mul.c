#include "mul.h"

/**
 * mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int mul(int a, int b)
{
int result = 0;
while (b)
{
if (b & 1)
result += a;
a <<= 1;
b >>= 1;
}
return (0);
}
