#include "main.h"
/**
  * print_sign - look if the input number is greater equal or *less than zero'
  * @n: the number to check
  * Return: 1 if n is greater than zero, 0 if n is zero
  */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
