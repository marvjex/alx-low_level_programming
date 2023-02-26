#include "mul.h"
/**
 * mul - multiplies two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: The product of the two integers.
 */
int mul(int a, int b)

{
int product = 0;
for (; b != 0; b--)
product += a;
return (product);
}
