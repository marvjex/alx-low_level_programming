#include "main.h"
#include <unistd.h>
/**
  *main - Entry point
  *Description:'_putchar - writes the character c to stdout'
  *Return: 1 on success
  */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
