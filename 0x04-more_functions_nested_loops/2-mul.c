#include "mul.h"
/**
 * mul - multiplies two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: The product of the two integers.
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
return (result);
}
