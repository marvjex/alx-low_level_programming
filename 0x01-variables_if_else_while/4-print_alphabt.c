#include <stdio.h>
/**
  * main - Entry point of the program
  * Description 'returns alphabetical letters both except q and e'
  * Returns: Always 0
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
