#include "main.h"
/**
  *main - Entry point
  *Description:'shows 1 if the iput is a'
  *lowercase character. Another cases, shows
  *0
  *Return: 1 for lower cases character. 0 for the rest
  */
int _islower(int c)
{
if (c >= 97 && c <=122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

