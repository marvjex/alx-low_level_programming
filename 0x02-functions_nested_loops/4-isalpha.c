#include " main.h"
/**
  *main - Entry point
  *Description:'checks for alphabetic character.'
  *shows 1 if one of the input is a
  *@c:The character in ASCII code
  *Return: Always 0 (success)
  */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >=65 && c <= 98))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}


