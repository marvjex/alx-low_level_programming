#include "main.h"
/**
  *main - Entry point
  *Description:'prints the last digits of a number'
  *Return: the last digit.
  */
int print_last_digit(int n)
{
	int h;
	h = n % 10;
	if (h < 0)
	{
		_putchar(-h + 48);
		return (-h);
	}
	else
	{
		_putchar(h + 48);
		return (h);
	}
}
