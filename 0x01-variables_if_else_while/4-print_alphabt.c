#include <stdio.h>
/**
 * main - returns alphabetical letters both except q and e
 * Returns: Always 0 (success)
 */
int main(void)
{
char ch  = 'a';
while (ch <= 'z'
{
if ((ch != 'e') && (ch != 'q'))
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
