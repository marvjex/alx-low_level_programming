#include "main.h"
/**
  *main - Entry point
  *Description:'Determines if the input number is greater equal or   *less than zero'
  *Return:1 is grater than zero . 0 is zero
  *-1 is less than zero 
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}