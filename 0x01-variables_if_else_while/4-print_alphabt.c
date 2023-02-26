#include <stdio.h>
/**
  * main - Entry point
  * Description 'returns alphabetical letters both except q and e'
  * Return: Always 0 (Success)
  */
int main(void)
{
int c = 97;
while (c <= 122)
{
if (c == 101 || c == 113)
{
c++;
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
